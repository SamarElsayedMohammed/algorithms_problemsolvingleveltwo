#include <iostream>
#include<cmath>
using namespace std;
enum enNumberTYpe{Prime=0,NotPrime=1};

float ValidateNUmber(string Message){
    float Num=0;
    do
    {
        cout<<Message;
        cin>>Num;
    } while (Num <= 0);
    return Num;
}

int SumOfNumbers(int number){
    int sum=0;
    for (int i = 1; i < number; i++)
    {
        if ((number%i) == 0)
        {
           sum+=i;
        }
        
    }
    return sum;
    
}
void CheckPerfectNumber(int num ,int sum){
    if (sum == num)
        cout <<"perfect number ";
    else
        cout <<"not perfect number ";
    
    
}

int main(){

    int num = ValidateNUmber("enter number pleas : ");
    CheckPerfectNumber(num,SumOfNumbers(num));

    return 0;
}