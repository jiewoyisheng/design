#include"bridge.h"
#include<iostream>

int main()
{
    shared_ptr<Game> sp_Game = make_shared<GameA>();
    shared_ptr<Phone> sp_Phone = make_shared<PhoneA>();
    sp_Phone->SetupGame(sp_Game);
    sp_Phone->play();
    printf("****************\n");
   
    sp_Game = make_shared<GameB>();
    sp_Phone->SetupGame(sp_Game);
    sp_Phone->play();
    return 0;
}
