#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int ValidateNUmber(string Message){
    int Num;
    do
    {
        cout<<Message;
        cin>>Num;
    } while (Num <=0 );
    return Num;
}  
int FrequencyNumber(short shortNum,int MainNum){
    int Remender = 0,counter=0;
    while (MainNum > 0)
    {
        Remender = MainNum % 10;
        MainNum = MainNum /10;
        if(Remender == shortNum)
            counter++;
    }
    return counter;
    
   }
void PrintFrequencyNUmber(int MainNum){

    for (short i = 0; i < 10; i++)
    {
        int CountDigits = FrequencyNumber(i,MainNum);
        if (CountDigits > 0)
        {
            cout <<"Digits "<<i<<" frequncy is "<<CountDigits<<" Time(s)"<<endl;
        }
        
    }

}
int main(){
    int MainNumber = ValidateNUmber("Enter Main Number  please : ");
    PrintFrequencyNUmber(MainNumber);
    return 0;
}