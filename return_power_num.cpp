#include <iostream>
using namespace std;

void power(int* num)
{
	*num = (*num) * (*num);
}

int main()
{
	int num;

	cout << "input> ";
	cin >> num;

	power(&num);

	cout << "Á¦°ö°ª > " << num << endl;

	return 0;
}