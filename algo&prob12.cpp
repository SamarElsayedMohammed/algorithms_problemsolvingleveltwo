#include <iostream>

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
void PrintInvertedPattrenNumber(int Number){
    for (int i = Number; i >=1; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout<< i;
        }
        cout<<endl; 
    }   
}
int main(){
    PrintInvertedPattrenNumber(ValidateNUmber("Enter Number : "));
    return 0;
}