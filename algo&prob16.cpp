#include <iostream>

using namespace std;

void PrintLetterWord(){
    cout<<endl;
    string word ="";
    for (int i = 65; i <=90; i++)
    {   
        for (int j = 65; j <= 90; j++)
        {
            for (int l = 65; l <= 90; l++)
            {
                cout<< word + char(i)+ char(j)+ char(l)<<endl;
                word ="";

            }
            
        }

        
        
    }   
}
int main(){
    PrintLetterWord();
    return 0;
}