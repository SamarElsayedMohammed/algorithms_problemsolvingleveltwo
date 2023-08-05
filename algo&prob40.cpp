#include<iostream>
#include<string>
#include<cmath>
using namespace std; 

void AddArrayElement(int Number, int arr[100], int& arrLength) {
     //its a new element so we need to add the length by 1
     
     arrLength++; 
     arr[arrLength - 1] = Number; 
     }
// bool IsNumberInArray(int Number, int Numpers[100],int Length){
//     for (int i = 0; i < Length; i++)
//     {
//         if(Numpers[i] == Number){
//             return true;
//         }
//     }

//     return false;
// }
int SearchInArray(int Length,int NumberTosearch,int Numpers[100]){
    for (int i = 0; i < Length; i++)
    {
        if(Numpers[i] == NumberTosearch){

            return i;
        }
    }
    return -1;
}
bool PrintSearcResult(int NumberTosearch,int Numpers[100],int Length){
    return SearchInArray(Length,NumberTosearch,Numpers) != -1;
}
void CopyArrayElement(int  Length ,int arr[100],int arr2[100],int &arrLength){
    AddArrayElement(arr[0] , arr2 ,arrLength);
    for (int i = 0; i < Length; i++)
    {
         
        if(!PrintSearcResult(arr[i],arr2,arrLength))
            AddArrayElement(arr[i] , arr2 ,arrLength);
    }
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
    int arr[100]={10,10,10,50,50,70,70,70,90},arr2[100],arrLength = 0;
    int Length = 9;
    PrintArrayElement(Length, arr);
    cout <<endl<<"copy array is : ";
    CopyArrayElement(Length, arr,arr2,arrLength);
    PrintArrayElement(arrLength, arr2);

    return 0; 
    } 