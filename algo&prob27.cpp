#include <iostream>
#include<string>
#include <cstdlib>
using namespace std;
enum enNumberTYpe{Prime=0,NotPrime=1};
int GenerateRandomNumber(int From ,int To){
    int RnadomNumber = rand()%(To -From +1)+From;
    return RnadomNumber;
}
float ReadPositiveNUmber(string Message){
    float Num=0;
    do
    {
        cout<<Message;
        cin>>Num;
    } while (Num <= 0);
    return Num;
}
void CreateAray(int Length,int Numpers[100]){
    for (int i = 0; i < Length; i++)
    {
        Numpers[i] = GenerateRandomNumber(1,100);
    }

}
void PrintArrayElement(int Length ,int Numpers[100]){
    cout<<endl;
    for (int i = 0; i < Length; i++)
    {
        cout<<Numpers[i]<<"  ";
    }
}
int SumNumberInArray(int Length ,int Numpers[100]){
    int sum=0;
    for (int i = 0; i < Length; i++)
    {
       sum+=Numpers[i];
    }
    return sum;
}
float AverageArray (int Length ,int Numpers[100]){
    return (float)SumNumberInArray(Length,Numpers)/Length;
}
int main(){
    srand((unsigned)time(NULL)); 
    int arr[100];
    int Length = ReadPositiveNUmber("Enter Your arrayn element number: ");
    CreateAray(Length,arr);
    PrintArrayElement(Length, arr);
    cout <<"average is : "<<AverageArray(Length, arr);
    return 0;
}