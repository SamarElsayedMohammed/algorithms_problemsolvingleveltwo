

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


int myCeil(float number){

       { if(number > 0)
            return (int)number+1;
        else 
            return (int)number;
        }

}


int main() {  
    
    float number = ReadPositiveNUmber("Enter Your number: ");
    cout <<" myCeil number is : "<<myCeil(number)<<endl;
    cout <<" c++ ceil number is : "<<ceil(number)<<endl;



    return 0; 
    } 