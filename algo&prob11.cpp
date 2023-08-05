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
int ReverseNumber(int Num){
    int Remender = 0,Number2=0;
    while (Num > 0)
    {
        Remender = Num % 10;
        Num = Num /10;
        Number2 = Number2 *10 + Remender;
    }
    return Number2;
    
   }
void CheckPalinNumber(int Number){
    if(Number == ReverseNumber(Number))
        cout<<"its Palindromic number "<<endl;
    else 
        cout<<"its Not a Palindromic number "<<endl;

}
int main(){
    CheckPalinNumber(ValidateNUmber("Enter Number please : "));
    return 0;
}