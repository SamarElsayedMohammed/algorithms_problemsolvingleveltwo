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
void PrintPattrenNumber(int Number){
    for (int i = 1; i <= Number; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout<< i;
        }
        cout<<endl; 
    }   
}
int main(){
    PrintPattrenNumber(ValidateNUmber("Enter Number : "));
    return 0;
}