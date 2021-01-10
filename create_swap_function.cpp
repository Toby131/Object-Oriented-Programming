#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	x = y;
	*y = temp;
}

int main()
{
	int a = 10, b = 20;
	cout << "before swap" << endl;
	cout << "a = " << a << ", " << "b = " << b << endl;
	swap(a, b);
	cout << "after swap" << endl;
	cout << "a = " << a << ", " << "b = " << b << endl;

	return 0;
}