#include "A.h"

//namespace beta
//{
//	class B;
//}

#include "B.h"

 alpha::A::A()
{
	std::cout << "A::A()" << std::endl;
}

void alpha::A::A_foo()
{
	beta::B b;
	static bool once = true;
	if (once)
	{
		once = false;
		b.B_bar();
	}
	std::cout << "A::A_foo()" << std::endl;
}

