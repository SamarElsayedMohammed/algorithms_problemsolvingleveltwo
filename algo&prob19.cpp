#include <iostream>
#include <cstdlib>
using namespace std;

int GenerateRandomNumber(int From ,int To){
    int RnadomNumber = rand()%(To -From +1)+From;
    return RnadomNumber;
}

int main(){
     srand((unsigned)time(NULL)); 
     cout <<GenerateRandomNumber(1,10)<<endl;
     cout <<GenerateRandomNumber(1,10)<<endl;
     cout <<GenerateRandomNumber(1,10)<<endl;
     cout <<GenerateRandomNumber(10,100)<<endl;
     cout <<GenerateRandomNumber(10,100)<<endl;
     cout <<GenerateRandomNumber(10,100)<<endl;
    return 0;
}