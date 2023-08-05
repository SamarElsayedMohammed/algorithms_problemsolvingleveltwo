
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
void CreateAray(int Length,int Numpers[100]){
    for (int i = 0; i < Length; i++)
    {
        Numpers[i] = i+1;
    }

}
int GenerateRandomNumber(int From ,int To){
    int RnadomNumber = rand()%(To -From +1)+From;
    return RnadomNumber;
}
void Swap(int &num1 ,int &num2){

    int temp = num1 ;
    num1=num2;
    num2=temp;
}
void ShuffelArray(int Length ,int Numpers[100]){
    for (int i = 0; i < Length; i++)
    {
        Swap(Numpers[(GenerateRandomNumber(1,Length)-1)],Numpers[(GenerateRandomNumber(1,Length)-1)]);
    }
}
void PrintArrayElement(int Length ,int Numpers[100]){
    cout<<endl;
    for (int i = 0; i < Length; i++)
    {
        cout<<Numpers[i] <<" ";
    }
}

int main(){
    srand((unsigned)time(NULL)); 
    int arr[100],  shuffelArray[100];
    int Length = ReadPositiveNUmber("Enter Your arrayn element number: ");
    CreateAray(Length,arr);
    ShuffelArray(Length,shuffelArray);
    PrintArrayElement(Length, shuffelArray);
   cout<<endl;
    return 0;
}