//#include "singleton_c.h"
#include "singleton_l.h"
#include <stdio.h>
using namespace desgin;

class Test
{
private:
	Test(){}
	Test(const Test&);
	Test& operator= (const Test&);

	friend class Singleton<Test>;
public:
	void print_this()
	{
		printf("thist = %p\n",this);
	}
};

int main(void)
{
	Test* s = Singleton<Test>::instance();
	s->print_this();

	Test* s1 = Singleton<Test>::instance();
	s1->print_this();

	return 0;

}

