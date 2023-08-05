#include <iostream>
#include<cmath>
#include<string>
using namespace std;
void FillArray(int arr[100] ,int &arrLength){
    arrLength =6;
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=30;
    arr[4]=20;
    arr[5]=10;
    // arr[6]=10;
}

void ReverseArray(int arr[100],int arr2[100],int &arrLength){
    for (int i = 0; i < arrLength; i++)
    {
        arr2[i] = arr[arrLength-1-i];
    }
    
   }
// bool CheckPalinNumber(int arr[100],int &arrLength){
//     int arr2[100];
//     ReverseArray(arr, arr2,arrLength);
//     for (int i = 0; i < arrLength; i++)
//     {
//         if (arr[i] != arr2[i])
//         {
//             return false;
//         }
        
//     }
//     return true ;
// }
bool CheckPalinNumber(int arr[100],int &arrLength){

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] != arr[arrLength-i-1])
        {
            return false;
        }
        
    }
    return true ;
}
int main(){
    int arr[100],arrLength;
    FillArray( arr ,arrLength);

if (CheckPalinNumber(arr ,arrLength))
{
    cout<<"array is plindar array "<<endl;
}else{
    cout<<"array is not plindar array "<<endl;

}

    return 0;
}