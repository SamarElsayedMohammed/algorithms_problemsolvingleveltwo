


#include<iostream>
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

int GenerateRandomNumber(int From ,int To){
    int RnadomNumber = rand()%(To -From +1)+From;
    return RnadomNumber;
}
void CreateAray(int Length,int Numpers[100]){
    for (int i = 0; i < Length; i++)
    {
        Numpers[i] = GenerateRandomNumber(1,100);
    }

}
int SearchInArray(int Length,int NumberTosearch,int Numpers[100]){
    for (int i = 0; i < Length; i++)
    {
        if(Numpers[i] == NumberTosearch){

            return i;
        }
    }
    return -1;
}
bool PrintSearcResult(int Length,int NumberTosearch,int Numpers[100]){
    return SearchInArray(Length,NumberTosearch,Numpers) != -1;
}
void PrintArrayElement(int Length ,int Numpers[100]){
    cout<<endl;
    for (int i = 0; i < Length; i++)
    {
        cout<<Numpers[i] <<" ";
    }
}

int main() {  
    srand((unsigned)time(NULL));
    int arr[100];
    int Length=ReadPositiveNUmber("Pleaes enter number of elements :  \n ");    
    CreateAray(Length,arr);
     PrintArrayElement(Length,arr); 
     cout<<endl;   
    int NumberToSearch=ReadPositiveNUmber("Pleaes enter number to Search :  \n "); 
   cout<<"Number you Looking for is : "<<NumberToSearch<<endl;
  int Search = SearchInArray(Length,NumberToSearch,arr);
     if(PrintSearcResult(Length,NumberToSearch,arr))
        {cout<<"Number you Loking For found "<<endl;}
    else{
        cout<<"Number you Loking For is not found "<<endl;
}

 
    return 0; 
    } 