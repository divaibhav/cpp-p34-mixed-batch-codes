/*WAP to accept two numbers from user and swap there values.

number1 = x;
number2 = y;

then after swap
number1 = y
number2 = x
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "enter number1" << "\n";
	int number1 = 0;
	cin >> number1;

	cout << "enter number2" << "\n";
	int number2 = 0;
	cin >> number2;

	int temp = number1; // third variable
	number1 = number2;
	number2 = temp;

	cout << "Number1 = " << number1 << "\n";
	cout << "Number2 = " << number2 << "\n";
}
/*
	a = a+b;
	b = a - b;
	a = a - b;
	a =10;
	b =20;
	a = 10 + 20 = 30
	b = 30 - 20 = 10
	a = 30 - 10 = 20
*/





