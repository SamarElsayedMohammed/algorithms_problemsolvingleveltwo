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
void PrintInvertedPattrenChar(int Number){
    for (int i = Number; i >=1; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout<< char(64+i);
        }
        cout<<endl; 
    }   
}
int main(){
    PrintInvertedPattrenChar(ValidateNUmber("Enter Number : "));
    return 0;
}