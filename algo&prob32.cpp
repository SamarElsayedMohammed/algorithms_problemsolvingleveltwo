
#include <iostream>
#include<string>
using namespace std;

float ReadPositiveNUmber(string Message){
    float Num=0;
    do
    {
        cout<<Message;
        cin>>Num;
    } while (Num <= 0);
    return Num;
}
int GenerateRandomNumber(int From ,int To){
    int RnadomNumber = rand()%(To -From +1)+From;
    return RnadomNumber;
}

void CreateAray(int Length,int Numpers[100]){
    for (int i = 0; i < Length; i++)
    {
        Numpers[i] = GenerateRandomNumber(1,100);
    }

}

void Swap(int &num1 ,int &num2){

    int temp = num1 ;
    num1=num2;
    num2=temp;
}

void PrintArrayElement(int Length ,int Numpers[100]){
    cout<<endl;
    for (int i = 0; i < Length; i++)
    {
        cout<<Numpers[i] <<" ";
    }
}
void CopyArrayElement(int Length ,int arr1[100],int arr2[100]){

    for (int i = 0; i < Length; i++)
    {
         arr2[i] = arr1[i];
    }
}
void ReverseArrayElement(int Length ,int arr2[100]){

    for (int i = 0; i < Length/2; i++)
    {
         swap(arr2[i],arr2[Length-i-1]);
    }
}
int main(){
srand((unsigned)time(NULL)); 
    int arr1[100],arr2[100];
    int Length = ReadPositiveNUmber("Enter Your arrayn element number: ");
    CreateAray(Length ,arr1);
    PrintArrayElement(Length ,arr1);
    CopyArrayElement(Length ,arr1,arr2);
    PrintArrayElement(Length ,arr2);
    ReverseArrayElement(Length ,arr2);
    PrintArrayElement(Length ,arr2);
    return 0;
}