#include "factory.h"

int main()
{
    AbstractFactory* pFactory;
    AbstractSportProduct* pProduct;
    pFactory = new BasketballFactory();
    pProduct = pFactory->getSportProduct();

    printf("****************\n");
    pFactory = new FootballFactory();
    pProduct = pFactory ->getSportProduct();

    return 0;
}