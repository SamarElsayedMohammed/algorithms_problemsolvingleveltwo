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


float myPower(float number,int power){
    float result  =1;
for (int i = 1; i <= power; i++)
{
    result*=number;
}
return result;

}


int main() {  
    
    float number = ReadPositiveNUmber("Enter Your number: ");
    int Power = ReadPositiveNUmber("Enter Your power : ");

    cout <<" myPower number is : "<<myPower(number,Power)<<endl;
    cout <<" c++ Pwer number is : "<<pow(number,Power)<<endl;



    return 0; 
    } 
