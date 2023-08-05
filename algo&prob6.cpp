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
   
int  SumDigits(int Num){
    int Remender = 0,
    sum =0;

    while (Num > 0)
    {
        Remender = Num % 10;
        Num = Num /10;
        sum +=Remender;
    }
    return sum;
    
   }

int main(){
   cout<<"sum of Digits  = " + to_string(SumDigits(ValidateNUmber("Enter Number please : ")))<<endl;
    return 0;
}