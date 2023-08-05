


#include<iostream>
#include<string>
using namespace std; 

float ReadPositiveNUmber(string Message){
    float Num=0;
    do
    {
        cout<<Message;
        cin>>Num;
    } while (Num <= -1);
    return Num;
}

int CreateAray(int Numpers[100]){
    int Lenght = 0;

    do
    {
        Numpers[Lenght] = ReadPositiveNUmber("enter your element value : ");
        Lenght++;
    } while (ReadPositiveNUmber("Do you want tp add anthor element : [0] no or [1] yes : ")  == 1);
    return Lenght;
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
    int Length = CreateAray(arr);
    cout <<"array length is " <<Length<<endl;   
    PrintArrayElement(Length,arr);

 
    return 0; 
    } 