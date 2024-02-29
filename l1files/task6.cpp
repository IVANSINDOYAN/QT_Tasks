#include<iostream>

int main()
{
	int a = 5;
	int *ptr = &a;
	int &ref = a;
	std::cout << a <<'\n';
	*ptr = 6;
	std::cout << *ptr << '\n';
	ref = 7;
	std::cout << ref << '\n';
}
