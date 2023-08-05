
#include<iostream>
#include<string>
#include<cmath>
using namespace std; 

float ReadPositiveNUmber(string Message){
    float Num=0;
    cout<<Message;
    cin>>Num;
    return Num;
}

float  MySqrt(float number){
    return pow(number,0.5);
    }


int main() {  
    
    float number = ReadPositiveNUmber("Enter Your number: ");
    cout <<" MySqrt number is : "<<MySqrt(number)<<endl;
    cout <<" c++ sqrt number is : "<<sqrt(number)<<endl;



    return 0; 
    } 
