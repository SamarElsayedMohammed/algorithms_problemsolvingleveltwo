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
enNumberTYpe CheckNUmberType(int Number){
    int M = round(Number/2);
    for (int i = 2; i <= M; i++)
    {
        if(Number % i == 0)
        return enNumberTYpe::NotPrime;
    }
    return enNumberTYpe::Prime;
}
void PrintPrimsNUmbers(){
    int Number =ValidateNUmber("enter number please: ");
    for (int i = 1; i <=Number; i++)
    {
        if (CheckNUmberType(i) == enNumberTYpe::Prime ){
        cout <<i<<"\t";
    }
    }
    
    
}

int main(){

    PrintPrimsNUmbers();
    return 0;
}