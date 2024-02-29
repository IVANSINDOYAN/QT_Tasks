#include<iostream>
int main()
{
	int a;
	std::cout << "please enter a number";
	std::cin >> a;
	if(a < 0){
		std::cout << "The number is negative " << '\n';
	}
	else if( a > 0){
		std::cout << "The number is positive" << '\n';
	}
	else{std::cout << "The number is equal to zero" << '\n';}

	switch (a){
	case 90 ... 100:
		std::cout << 'A';
		break;
	case 80 ... 89:
		std::cout << 'B';
		break;
	case 70 ... 79:
		std::cout << 'C';
		break;
	case 60 ... 69:
		std::cout << 'D';
		break;
	}
	std::cout << std::endl;
	a = 1;
	while(a <= 10){
		std::cout << a << " ";
		++a;
	}
}
