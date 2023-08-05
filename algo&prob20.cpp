#include <iostream>
#include <cstdlib>
using namespace std;
enum enRandomType{SmallLetters,CapitalLetters,SpecialCaracters,Digits};
int GenerateRandomNumber(int From ,int To){
    int RnadomNumber = rand()%(To -From +1)+From;
    return RnadomNumber;
}
char GenerateRandomNumberBasedInType(enRandomType Type){
    switch (Type)
    {
    case enRandomType::SmallLetters:
        return char(GenerateRandomNumber(97,122));
        break;
    case enRandomType::CapitalLetters:
        return char(GenerateRandomNumber(65,90));
        break;
    case enRandomType::SpecialCaracters:
        return char(GenerateRandomNumber(33,47));
        break;
    case enRandomType::Digits:
        return char(GenerateRandomNumber(48,57));
        break; 
    default:
        return char(GenerateRandomNumber(48,57));
        break;
    }
}
void PrintRandomTypeMenu(){
    cout <<"please chose random generator type "<<endl;
    cout <<"0 :SmallLetters "<<endl;
    cout<<"1:CapitalLetters "<<endl;
    cout<<"2:SpecialCaracters "<<endl;
    cout<<"3:Digits "<<endl;
    cout<<"----------------------------------------------------"<<endl;
}
enRandomType ReadRandomType()
{
    int number;
    enRandomType random;
    PrintRandomTypeMenu();
    cin>>number;
    random = (enRandomType)number;
    return random;

}
int main(){
    srand((unsigned)time(NULL)); 
   cout <<GenerateRandomNumberBasedInType(enRandomType::CapitalLetters)<<endl;
   cout <<GenerateRandomNumberBasedInType(enRandomType::SpecialCaracters)<<endl;
   cout <<GenerateRandomNumberBasedInType(enRandomType::Digits)<<endl;
   cout <<GenerateRandomNumberBasedInType(enRandomType::SmallLetters)<<endl;
    return 0;
}