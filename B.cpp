#include "B.h"

namespace alpha
{
	class A;
}

#include "A.h"

beta::B::B()
{
	std::cout << "B::B()" << std::endl;
}

void beta::B::B_bar()
{
	alpha::A a;
	static bool once = true;
	if (once)
	{
		once = false;
		a.A_foo();
	}
	std::cout << "B::B_bar()" << std::endl;
}
