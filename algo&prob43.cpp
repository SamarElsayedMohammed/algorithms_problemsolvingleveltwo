
#include<iostream>
#include<string>
#include<cmath>
using namespace std; 
enum enNumberTYpe{Odd=0,Even=1};
enNumberTYpe OvenOrOddNumber (int number){
    if ((number % 2)!= 0 )
        return enNumberTYpe::Odd;
    else
        return enNumberTYpe::Even;
}
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
int CountEvenArrayElement(int  Length ,int arr[100]){
    int count =0;
    for (int i = 0; i < Length; i++)
    {
        if(OvenOrOddNumber(arr[i]) == enNumberTYpe::Even)
        count++;
        
    }
    return count;
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
    int arr[100];
    int Length = ReadPositiveNUmber("Enter Your arrayn element number: ");
    CreateAray(Length,arr);
    PrintArrayElement(Length, arr);
    cout <<endl<<"count of even numbers is : "<<CountEvenArrayElement(Length, arr);


    return 0; 
    } 