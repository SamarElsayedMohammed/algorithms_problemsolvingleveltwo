#include <iostream>
using namespace std;
void PrintTableHeader(){
    cout << "\n\n\t\t\tmultiolication table from 1 to 10 \n\n";
    cout <<"\t";
    for (int i = 1; i <= 10; i++)
    {
       cout << i <<"\t";
    }
    
    cout<<"\n----------------------------------------------------------------------------------------------\n";
    
}
string ColumnSeperator(int i){
    if(i < 10)
        return "    |";
    else
        return "   |";

}
void PrintMultiplication(){
    PrintTableHeader();
     for (int i = 1; i <= 10; i++)
    {
        cout<<" "<<i<<ColumnSeperator(i)<<"\t";
        for (int j = 1; j <= 10; j++)
        {
            cout <<i*j<<"\t";
        }
        cout<<endl;
        
    }
}
int main(){
    PrintMultiplication();
    return 0;
}