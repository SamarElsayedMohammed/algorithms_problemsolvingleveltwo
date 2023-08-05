#include <iostream>
#include<string>
using namespace std;
enum enNumberTYpe{Prime=0,NotPrime=1};

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
        Numpers[i] = ReadPositiveNUmber("Enter number"+to_string(i+1)+" : ");
    }

}
void PrintArrayElement(int Length ,int Numpers[100]){
    cout<<endl;
    for (int i = 0; i < Length; i++)
    {
        cout<<"Element["+to_string(i)+"] : "<<Numpers[i]<<endl<<endl;
    }
}
int CountReapetedNumber(int Number, int Numpers[100],int Length){
    int count = 0;
    for (int i = 0; i < Length; i++)
    {
        if(Numpers[i] == Number){
            count++;
        }
    }

    return count;
}

int main(){
    int arr[100];
    int Length = ReadPositiveNUmber("Enter Your arrayn element number: ");
    CreateAray(Length,arr);
    PrintArrayElement(Length, arr);
    int NumberToCheck = ReadPositiveNUmber("Enter number to check: ");
    
    cout <<endl<<"Number "+to_string(NumberToCheck)+" is repeated : " + to_string(CountReapetedNumber(NumberToCheck,arr,Length))+" time(s)";
     ;    
    return 0;
}