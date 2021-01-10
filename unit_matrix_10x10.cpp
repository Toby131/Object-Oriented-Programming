#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int colum = 1, row = 1;
	while (colum < 11)
	{
		while (row < 11)
		{
			int num;
			if (colum == row)
			{
				num = 1;
			}
			else
			{
				num = 0;
			}
			cout << setw(4) << num;
			row += 1;
		}
		cout << endl;
		row = 1;
		colum += 1;
	}
	return 0;
}