#include    <iostream>
using namespace std;

int gcd(int x, int y);

int main()
{
	int x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;

	if (x < y)
	{
		swap(y, x);
	}

	int GCD = gcd(x, y);

	cout << "gcd(" << x << "," << y << ") = " << GCD << endl;

	return 0;
}

int gcd(int x, int y)
{
	if (x % y == 0)
		return y;

	return gcd(y, x % y);
}