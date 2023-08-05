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
// float GetFractionPart(float number){

//     int number2,remender;
//     number2 = 10*number;
//     remender = number2%10;
//     return remender;

// }
float GetFractionPart(float number){

    return  number -(int)number ;

    
}
int64_t myRound(float number){

     float  remender = GetFractionPart(number);

    if(abs(remender) >=0.5)
       { if(number > 0)
            return (int)number+1;
        else 
            return (int)number-1;
        }
    return (int)number;

}


int main() {  
    
    float number = ReadPositiveNUmber("Enter Your number: ");
    cout <<" myRound number is : "<<myRound(number)<<endl;
    cout <<" c++ Round number is : "<<round(number)<<endl;



    return 0; 
    } 