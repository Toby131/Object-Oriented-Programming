#include <iostream>
using namespace std;

int sum(int x, int y) { return x + y; }
int mult(int x, int y) { return x * y; }

int evaluate(int (*func)(int x, int y), int x, int y)
{
	return func(x, y);
}

int main()
{
	int(*func)(int, int);
	func = &sum;
	cout << "Sum func = " << func(10, 20) << endl;

	func = &mult;
	cout << "Mult func = " << func(10, 20) << endl;

	cout << "Evaluate Sum func = " << evaluate(&sum, 100, 200) << endl;
	cout << "Evaluate Mult func = " << evaluate(&mult, 100, 200) << endl;

	return 0;
}