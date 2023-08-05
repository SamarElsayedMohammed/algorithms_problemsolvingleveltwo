#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int ValidateNUmber(string Message){
    int Num;
    do
    {
        cout<<Message;
        cin>>Num;
    } while (Num <=0 );
    return Num;
}
void PrintResverseNumbers(string Number){
    int numLength = Number.length();
    for ( int i = numLength-1; i >= 0; i--)
    {
         cout<<Number[i]<<endl;
    }
}
   
void PrintDigits(int Num){
    int Remender = 0;
    while (Num > 0)
    {
        Remender = Num % 10;
        Num = Num /10;
        cout <<Remender<<endl;
    }
    
   }
int main(){
    // PrintResverseNumbers(to_string(ValidateNUmber("Enter Number please : ")));

    PrintDigits(ValidateNUmber("Enter Number please : "));
    return 0;
}