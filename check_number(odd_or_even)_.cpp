#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	while (n < 6)
	{
		cout << n << "번째 정수 : ";
		int number;
		cin >> number;
		if (number % 2 == 0)
		{
			cout << number << "은(는) 짝수입니다." << endl;
		}
		else
		{
			cout << number << "은(는) 홀수입니다. " << endl;
		}
		n += 1;
	}
	return 0;
}