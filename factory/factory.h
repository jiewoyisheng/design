#ifndef  _FACTORY_H
#define  _FACTORY_H

#include "product.h"


class AbstractFactory
{
public:
   virtual AbstractSportProduct* getSportProduct() =0;
};

class BasketballFactory: public AbstractFactory
{
private:
    /* data */
public:
    BasketballFactory()
    {
        printf("basketballfactory\n");
    }
    AbstractSportProduct* getSportProduct()
    {
        return new Basketball();
    }
};

class FootballFactory: public AbstractFactory
{
private:
    /* data */
public:
    FootballFactory()
    {
        printf("footballfactory\n");
    }

    AbstractSportProduct* getSportProduct()
    {
        return new Football();
    }
};

#endif

