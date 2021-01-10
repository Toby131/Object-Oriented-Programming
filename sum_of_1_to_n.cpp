#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "number : ";
	cin >> n;
	int count = 1;
	int output = 0;
	while (count < n + 1)
	{
		output += count;
		count += 1;
	}
	cout << "Sum of 1 to " << n << " = " << output << endl;

	return 0;
}