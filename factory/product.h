#ifndef _PRODUCT_H
#define _PRODUCT_H

#include <stdio.h>

class AbstractSportProduct
{
private:
    /* data */
public:
    AbstractSportProduct(/* args */)
    {}
    ~AbstractSportProduct(){}
    virtual void  printName(){}
    virtual void play(){}
};

class Basketball:public AbstractSportProduct
{
private:
    /* data */
public:
    Basketball(/* args */)
    {
        printName();
        play();
    }
    ~Basketball(){}
    void printName()
    {
        printf("get basketball\n");
    }
    void play()
    {
        printf("play basketball\n");
    }
};

class Football:public AbstractSportProduct
{
    public:
        Football()
        {
            printName();
            play();
        }
    void printName()
    {
        printf("get football\n");
    }
    void play()
    {
        printf("play football\n");
    }
};

#endif //_
