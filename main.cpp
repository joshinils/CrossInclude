#include "A.h"
#include "B.h"
#include <iostream>

int main()
{
	alpha::A a;
	a.A_foo();

	beta::B b;
	b.B_bar();
	std::cout << "hello" << std::endl;
	return 0;
}