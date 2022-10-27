#include <iostream>
#include <math.h>
using namespace std;


double calculation(double x, char operand, double y)
{
	//Different calculator cases

	switch (operand)
	{
	case '+':
		return x + y;

	case '-':
		return x - y;

	case '*':
		return x * y;

	case 'x':
		return x * y;

	case '/':
		return x / y;
	}



}


int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char operand = NULL;

	cout << "Calculator Program" << endl << endl;
	cout << "Enter your calculation: " << endl;

	while (true)
	{
		cin >> x >> operand >> y;
		result = calculation(x, operand, y);
		cout << "Your result is: " << result << endl;
	}



	return 0;
}
