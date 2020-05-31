#ifndef _DECORATOR_H
#define _DECORATOR_H
#include<iostream>
#include<memory>

using namespace std;

class Component
{
public:
    Component(/* args */){}
    virtual void Opration() = 0;
};

class Phone: public Component
{
public:
    Phone(){}
    ~Phone(){}
    void Opration()
    {
        cout<<"phone"<<endl;
    }
};

class Decorator: public Component
{
private:
    shared_ptr<Component> m_pDecorator;
public:
    Decorator(){}
    Decorator(shared_ptr<Component> ptr)
    {
        this->SetDecorator(ptr);
    }
    ~Decorator(){}
		void SetDecorator(shared_ptr<Component> ptr)
		{
			this->m_pDecorator = ptr;
    }
    void Opration()
    {
        this->m_pDecorator->Opration();
    }
    shared_ptr<Component> GetComponent()
    {
        return m_pDecorator;
    }

};


class DecoratorShell: public Decorator
{
public:
    DecoratorShell(){}
    DecoratorShell(shared_ptr<Component> ptr)
    {
        this->SetDecorator(ptr);
    }
    ~DecoratorShell(){}
    void NewBevior()
    {
        cout<<"安装手机壳"<<endl;
    }
    void Opration()
    {
        this->GetComponent()->Opration();
        NewBevior();
    }

};


class DecoratorSticker: public Decorator
{
public:
    DecoratorSticker(){}
    DecoratorSticker(shared_ptr<Component> ptr)
    {
        this->SetDecorator(ptr);
    }
    ~DecoratorSticker(){}
    void NewBevior()
    {
        cout<<"贴卡通贴纸"<<endl;
    }
    void Opration()
    {
        this->GetComponent()->Opration();
        NewBevior();
    }

};


#endif
