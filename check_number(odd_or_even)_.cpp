#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	while (n < 6)
	{
		cout << n << "��° ���� : ";
		int number;
		cin >> number;
		if (number % 2 == 0)
		{
			cout << number << "��(��) ¦���Դϴ�." << endl;
		}
		else
		{
			cout << number << "��(��) Ȧ���Դϴ�. " << endl;
		}
		n += 1;
	}
	return 0;
}