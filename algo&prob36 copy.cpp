#include<iostream>
#include<string>
using namespace std; 

float ReadNumber(string Message){
    float Num=0;
    do
    {
        cout<<Message;
        cin>>Num;
    } while (Num <= 0);
    return Num;
}

void AddArrayElement(int Number, int arr[100], int& arrLength) {
     //its a new element so we need to add the length by 1 
     arrLength++; 
     arr[arrLength - 1] = Number; 
     } 
     void InputUserNumbersInArray(int arr[100], int& arrLength) {
         bool AddMore = true; 
         do    {         
            AddArrayElement(ReadNumber("\nPlease enter a number? "), arr, arrLength);

            cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";          
            cin >> AddMore;

            } while (AddMore); 
            } 

void PrintArrayElement(int Length ,int Numpers[100]){
    cout<<endl;
    for (int i = 0; i < Length; i++)
    {
        cout<<Numpers[i] <<" ";
    }
}

int main() {  
    int arr[100], arrLength = 0;     
    InputUserNumbersInArray(arr, arrLength);     
    cout << "\nArray Length: " << arrLength << endl;     
    cout << "Array elements: ";     
    PrintArrayElement( arrLength,arr); 
 
    return 0; 
    } 