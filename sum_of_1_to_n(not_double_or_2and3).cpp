#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "number : ";
	cin >> n;

	int output = 0;
	int count = 1;
	while (count < n + 1)
	{
		if (count % 2 != 0)
		{
			if (count % 3 != 0)
			{
				output += count;
			}
		}
		count += 1;
	}
	cout << "sum : " << output << endl;

	return 0;
}