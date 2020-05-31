#ifndef  _BRIDGE_H
#define  _BRIDGE_H

#include<stdio.h>
#include<memory>

using namespace std;
class Game
{
public:
    Game(){}
    virtual void play() = 0;
};

class GameA : public Game
{

public:
    GameA(){}
    ~GameA(){}
    void play(){
        printf("play GameA\n");
    }
};

class GameB : public Game
{

public:
    GameB (){}
    ~GameB (){}
    void play(){
        printf("play GameB\n");
    }
};




class Phone
{
//private:
//    Game* m_pGame;
public:
    Phone(){}
   virtual void SetupGame(shared_ptr<Game> spGame) = 0;
   virtual void play() = 0;

};

class PhoneA : public Phone
{
public:
    PhoneA(){}
    ~PhoneA(){}
    void SetupGame(shared_ptr<Game> spGame){
        m_pGame = spGame;
    }
    void play(){
        this->m_pGame->play();
    }
private:
    shared_ptr<Game> m_pGame;
};

class PhoneB : public Phone
{
public:
    PhoneB(){}
    ~PhoneB(){}
    void SetupGame(shared_ptr<Game> spGame){
        m_pGame = spGame;
    }
    void play(){
        this->m_pGame->play();
    }
private:
    shared_ptr<Game>  m_pGame;
};

#endif
