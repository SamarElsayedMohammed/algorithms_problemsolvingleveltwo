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
    int Number = ValidateNUmber("Enter Number please : ");
    PrintDigits(ReverseNumber(Number));
    return 0;
}