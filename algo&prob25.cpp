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
void MinNumber(int Length ,int Numpers[100]){
    int minNumber = Numpers[0];
    for (int i = 0; i < Length; i++)
    {
        if (Numpers[i] <  minNumber){
            minNumber = Numpers[i];
        }
    }
    cout <<"Min number is "<<minNumber<<endl;
}

int main(){
    srand((unsigned)time(NULL)); 
    int arr[100];
    int Length = ReadPositiveNUmber("Enter Your arrayn element number: ");
    CreateAray(Length,arr);
    PrintArrayElement(Length, arr);
    MinNumber(Length, arr);
    return 0;
}