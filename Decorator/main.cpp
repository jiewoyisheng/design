#include "decorator.h"

int main(int argc, char* argv[])
{
    cout<<"first phone"<<endl;
    shared_ptr<Component> ph1 = make_shared<Phone>();
    shared_ptr<Component> com_sh1 = make_shared<DecoratorShell>(ph1);
    com_sh1->Opration();
    cout<<"second phone"<<endl;
    shared_ptr<Component> ph2 =make_shared<Phone>();
    shared_ptr<Component> com_sh2 = make_shared<DecoratorSticker>(ph2);
    com_sh2->Opration();

    return 0;
}