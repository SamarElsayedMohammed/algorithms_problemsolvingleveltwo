#include <iostream>
#include<string>
#include <cstdlib>
#include<cmath>
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
enNumberTYpe CheckNUmberType(int Number){
    int M = round(Number/2);
    for (int i = 2; i <= M; i++)
    {
        if(Number % i == 0)
        return enNumberTYpe::NotPrime;
    }
    return enNumberTYpe::Prime;
}
int CopyPrimeElement(int Length ,int Numpers[100],int arr[100]){
    int CopyArrayLength=0;
    for (int i = 0; i < Length; i++)
    {
        if (CheckNUmberType(Numpers[i]) == enNumberTYpe::Prime ){
         arr[CopyArrayLength] = Numpers[i];
         CopyArrayLength++;
         }
    }
    return CopyArrayLength;
}
int main(){
    srand((unsigned)time(NULL)); 
    int arr[100],arr2[100];
    int Length = ReadPositiveNUmber("Enter Your arrayn element number: ");
    CreateAray(Length,arr);
    PrintArrayElement(Length, arr);
    cout <<endl<<"copy array is : ";
    PrintArrayElement( CopyPrimeElement(Length, arr,arr2), arr2);


    return 0;
}