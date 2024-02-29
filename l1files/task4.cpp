#include<iostream>
long double sum(double a, double b){
	return a + b;
} 

long double dif(double a, double b){
        return a - b;
}

double div(double a, double b){
        return a / b;
}

double mul(double a, double b){
        return a * b;
}


int main()
{
	std::cout << "Enter the first operand";
	double a;
	std::cin >> a;
	std::cout << "Enter the second operand";
	double b;
	std::cin >> b;
	std::cout << "Enter the operator";
	char c;
	std::cin >> c;
	switch(c){
		case '+':
			sum(a, b);
			break;
		case '-':
			std::cout << dif(a, b);
			break;
		case '/':
			std::cout << div(a, b);
			break;
		case '*':
			std::cout << mul(a, b);

	}
}
