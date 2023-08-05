#include <iostream>
#include<string>
using namespace std;

string ReadText(string Message){
    string Text;
    do
    {
        cout<<Message;
        cin>>Text;
    } while (Text.length() <=0 );
    return Text;
}
string PrintEncryptedWord(string textToEnc){

    int txtLength = textToEnc.length();
    // string EncryptedText="";
    for ( int i = txtLength-1; i >= 0; i--)
    {
        // EncryptedText+= char(int(textToEnc[i]) + 6);
        textToEnc[i] =char(int(textToEnc[i]) + 6);
    }
    return textToEnc;
}

string PrintDecryptedWord(string textToDecryp){

    int txtLength = textToDecryp.length();
    // string DecryptedText="";
    for ( int i = txtLength-1; i >= 0; i--)
    {
        // DecryptedText+= char(int(textToDecryp[i]) - 6);
        textToDecryp[i] =char(int(textToDecryp[i]) - 6);
    }
    return textToDecryp;
}
int main(){
   string txt = PrintEncryptedWord(ReadText("Enter your Text to encrypt: "));
cout<<txt;
cout<<endl;
cout<<PrintDecryptedWord(txt);

    return 0;
}