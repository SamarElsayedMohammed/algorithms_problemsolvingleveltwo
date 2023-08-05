#include <iostream>
#include <cstdlib>
using namespace std;
int GenerateRandomNumber(int From ,int To){
    int RnadomNumber = rand()%(To -From +1)+From;
    return RnadomNumber;
}
int ReadPositiveNUmber(string Message){
    int Num;
    do
    {
        cout<<Message;
        cin>>Num;
    } while (Num <=0 );
    return Num;
}
void PrintKeyGenerator(int number){
    for (int i = 1; i <= number; i++)
    {
        cout<< "key["<<i<<"] : ";
        for (int j = 1; j <= 4; j++)
        {
            for (int k = 1; k <=4; k++)
            {
                cout<<char(GenerateRandomNumber(65,90));
            }
            
            if (j!= 4)
            {
                cout<<"-";
            }
            
        }
        cout<<endl;
        
    }
    
}
int main(){
    srand((unsigned)time(NULL));
    PrintKeyGenerator(ReadPositiveNUmber("enter number of keys : "));
    return 0;
}