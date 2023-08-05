#include<iostream>
#include<string>
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
void AddArrayElement(int Number, int arr[100], int& arrLength) {
     //its a new element so we need to add the length by 1 
     arrLength++; 
     arr[arrLength - 1] = Number; 
     }  
void CopyArrayElement(int Length ,int arr[100],int arr2[100],int &arrLength){

    for (int i = 0; i < Length; i++)
    {
         AddArrayElement(arr[i] , arr2 ,arrLength);
    }
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
        cout<<Numpers[i] <<" ";
    }
}

int main() {  
    srand((unsigned)time(NULL)); 
    int arr[100],arr2[100],arrLength = 0;
    int Length = ReadPositiveNUmber("Enter Your arrayn element number: ");
    CreateAray(Length,arr);
    PrintArrayElement(Length, arr);
    cout <<endl<<"copy array is : ";
    CopyArrayElement(Length, arr,arr2,arrLength);
    PrintArrayElement(arrLength, arr2);

    return 0; 
    } 