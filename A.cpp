#include "A.h"

namespace beta 
{
	class B;
}

#include "B.h"

inline alpha::A::A()
{
	std::cout << "A::A()" << std::endl;
}

void alpha::A::A_foo()
{
	beta::B b;
	std::cout << "A::A_foo()" << std::endl;
}

