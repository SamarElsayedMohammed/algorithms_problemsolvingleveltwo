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

int myAbs(int number){
    if(number < 0)
        return -1*number; //return the absolute value of negative numbers.
    return number;
}


int main() {  
    
    int number = ReadPositiveNUmber("Enter Your number: ");

   cout <<" myabs number is : "<<myAbs(number)<<endl;
   cout <<"c++ number is : "<<abs(number)<<endl;


    return 0; 
    } 