#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, m;
	cout << "Enter n for n x m matrix : ";
	cin >> n;
	cout << "Enter m for n x m matrix : ";
	cin >> m;

	int col = 1, row = 1;

	while (col <= n)
	{
		while (row <= m)
		{
			cout << setw(4) << row * col;
			row += 1;
		}
		cout << endl;
		col += 1;
		row = 1;
	}
}