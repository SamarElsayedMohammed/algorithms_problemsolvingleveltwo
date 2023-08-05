#include <iostream>
#include <cstdlib>
using namespace std;
enum enToolsType{Paper =1,Stone =2,Sessior = 3};
enum enGameResult {Winner = 1, Lose = 2 ,Draw =3};
struct stGameResult
{
    int loser = 0,winer =0 ,draw =0;
};


int GenerateRandomNumber(int From ,int To){
    int RnadomNumber = rand()%(To -From +1)+From;
    return RnadomNumber;
}
int ReadPositiveNUmber(string Message){
        int Num;
        cout<<Message;
        cin>>Num;
    return Num;
}
void UserSelectionMenu(){
    cout<<"**************************************\n";
    cout<<"your choose :"<<endl;
    cout<<"1 : Paper ,";
    cout<<"2 : Stone  ,";
    cout<<"3 : Sessior ,";
    cout<<"\n**************************************\n";
}
enGameResult  GameResult(enToolsType Computer ,enToolsType Player){

    if ((Computer == enToolsType::Paper && Player== enToolsType::Stone ) 
     || (Computer == enToolsType::Stone &&Player== enToolsType::Sessior )
     || (Computer == enToolsType::Sessior &&Player== enToolsType::Paper ))
    {
        return enGameResult::Lose;
    }else if ((Player == enToolsType::Paper && Computer== enToolsType::Stone ) 
     || (Player == enToolsType::Stone &&Computer== enToolsType::Sessior )
     || (Player == enToolsType::Sessior &&Computer== enToolsType::Paper )){
        return enGameResult::Winner;
     }else{
        return enGameResult::Draw;
     }
}
void GameResultoutput(enGameResult Result,enToolsType Computer ,enToolsType Player,stGameResult &gameResult){
switch (Result)
{
case enGameResult::Winner :

    std::cout << "\033[32m ----------------------------------------- \033[0m" << std::endl;
    std::cout << "\033[32m Played is winner!\033[0m" << std::endl;
    std::cout << "\033[32m Played choose : "<<Player<<"!\033[0m" << std::endl;
    std::cout << "\033[32m computer choose :"<<Computer<<"!\033[0m" << std::endl;
    std::cout << "\033[32m ----------------------------------------- \033[0m" << std::endl;
    gameResult.winer++;

    break;
case enGameResult::Draw :
    std::cout << "\033[33m --------------------------------------------- \033[0m" << std::endl;
    std::cout << "\033[33m computer and palyer are Drawed !\033[0m" << std::endl;
    std::cout << "\033[33m cPlayed choose : "<<Player<<"!\033[0m" << std::endl;
    std::cout << "\033[33m computer choose :"<<Computer<<" !\033[0m" << std::endl;
    std::cout << "\033[33m --------------------------------------------- \033[0m" << std::endl;
    gameResult.draw++;
    break;
case enGameResult::Lose :
    std::cout << "\033[31m ---------------------------------------------------- \033[0m" << std::endl;
    std::cout << "\033[31m player is loser !\033[0m" << std::endl;
    std::cout << "\033[31m Played choose : "<<Player<<"!\033[0m" << std::endl;
    std::cout << "\033[31m computer choose :"<<Computer<<" !\033[0m" << std::endl;
    std::cout << "\033[31m ---------------------------------------------------- \033[0m" << std::endl;
    gameResult.loser++;


}
}

int main(){
   
    srand((unsigned)time(NULL));
    
    do
    {
    std::cout << "\033c";
    enToolsType Player;
    int select;
    int Rounds = ReadPositiveNUmber("How Many Round 1 to 10 : ");
    stGameResult gameResult;
    for (int i = 1; i <= Rounds; i++)
    {
        
        UserSelectionMenu();
        cin>>select;
        Player = (enToolsType)select;
        enToolsType Computer = (enToolsType)GenerateRandomNumber(1,3);
        // cout << ComputerChoise<<endl;
        GameResultoutput(GameResult(Computer,Player),Computer,Player,gameResult);

    }
     cout<<endl<<"-----------------------------------------------"<<endl;
        cout <<"Game Result is : "<<endl;
        cout <<"computer win : "<<gameResult.loser<<" time(s)"<<endl;
        cout <<"played win : "<<gameResult.winer<<" time(s)"<<endl;
        cout <<"players drawed : "<<gameResult.draw<<" time(s)"<<endl;
        cout<<endl<<"-----------------------------------------------"<<endl;
    
} while (ReadPositiveNUmber("do you want paly again"));
    
    return 0;
}