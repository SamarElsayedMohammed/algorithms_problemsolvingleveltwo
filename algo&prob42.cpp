#include<iostream>
#include<string>
#include<cmath>
using namespace std; 

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
int CountPositiveArrayElement(int  Length ,int arr[100]){
    int count =0;
    for (int i = 0; i < Length; i++)
    {
        if(arr[i] >=0 )
        count++;
        
    }
    return count;
}
void CreateAray(int Length,int Numpers[100]){
    for (int i = 0; i < Length; i++)
    {
        Numpers[i] = GenerateRandomNumber(-100,100);
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
    int arr[100];
    int Length = ReadPositiveNUmber("Enter Your arrayn element number: ");
    CreateAray(Length,arr);
    PrintArrayElement(Length, arr);
    cout <<endl<<"count of positive numbers is : "<<CountPositiveArrayElement(Length, arr);


    return 0; 
    } 