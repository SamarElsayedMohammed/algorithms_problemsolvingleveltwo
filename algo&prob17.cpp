#include <iostream>
#include<string>
using namespace std;

string ReadPassword(string Message){
    string Password;
    do
    {
        cout<<Message;
        cin>>Password;
    } while (Password.length() <=0 );
    return Password;
}
int PrintLetterWord(string password){
    cout<<endl;
    string word ="";
    int counter =0;
    for (int i = 65; i <=90; i++)
    {   
        for (int j = 65; j <= 90; j++)
        {
            for (int l = 65; l <= 90; l++)
            {
                 ++counter;
                word = word + char(i)+ char(j)+ char(l);
                cout<<word<<endl;
                if(word == password){
                    return counter;
                }        
                  word ="";  


            }
            
        }

        
        
    }  
    return 0; 
}
int main(){
    int trails = PrintLetterWord(ReadPassword("Enter Your Password : "));
    if(trails > 0)
    cout <<"password found after : "<<trails<<" trial(s)"<<endl;
    else
    cout <<"password not found "<<endl;


    return 0;
}