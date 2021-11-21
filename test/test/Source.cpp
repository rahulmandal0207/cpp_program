#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	char oper = '+';
	double result = 0.0;
	cout << "Calculator Consol Application" << endl << endl;
	cout << "Please enter operation to perform. Format a+b | a-b | a*b | a/b " << endl;

	Calculator c;
	while (true)
	{
		cin >> x >> oper >> y;
		if ((oper == '/') && (y == 0))
		{
			cout << "Division by 0 exception" << endl;
			continue;
		}
		else
		{
			result = c.Calculate(x, oper, y);
			cout << "Result is : " << result << endl;
		}
	}

	return 0;
}