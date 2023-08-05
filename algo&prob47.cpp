
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


int myFloor(float number){

       { if(number > 0)
            return (int)number;
        else 
            return (int)number-1;
        }

}


int main() {  
    
    float number = ReadPositiveNUmber("Enter Your number: ");
    cout <<" myFloor number is : "<<myFloor(number)<<endl;
    cout <<" c++ floor number is : "<<floor(number)<<endl;



    return 0; 
    } 