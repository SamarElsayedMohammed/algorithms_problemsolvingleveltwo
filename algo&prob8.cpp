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
int main(){
    short ShortNumber = ValidateNUmber("Enter Number to count : ");
    int MainNumber = ValidateNUmber("Enter Main Number  please : ");
    cout<<"Frequency of number : "<<FrequencyNumber(ShortNumber,MainNumber)<<endl;
    return 0;
}