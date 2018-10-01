#include "B.h"
#include "A.h"

inline beta::B::B()
{
	std::cout << "B::B()" << std::endl;
}

void beta::B::B_bar()
{
	alpha::A a;
	std::cout << "B::B_bar()" << std::endl;
}
