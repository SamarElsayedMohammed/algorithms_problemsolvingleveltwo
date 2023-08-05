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
void CreateTwoAraay(int arr1[100],int arr2[100],int Length){
    CreateAray(Length,arr1);
    CreateAray(Length,arr2);
}
void SumTwoArray(int arr1[100],int arr2[100],int arr3[100],int Length){
    
    for (int i = 0; i < Length; i++)
    {
        arr3[i] = arr1[i]+arr2[i];
    }
}
int main(){
    srand((unsigned)time(NULL)); 
    int arr1[100],arr2[100],arr3[100];
    int Length = ReadPositiveNUmber("Enter Your arrayn element number: ");
    CreateTwoAraay(arr1,arr2,Length);

    PrintArrayElement(Length, arr1);
    PrintArrayElement(Length, arr2);
    SumTwoArray(arr1,arr2,arr3,Length);
    cout<<endl<<"sum of two arrays is : "<<endl;
    PrintArrayElement(Length, arr3);

    

    return 0;
}