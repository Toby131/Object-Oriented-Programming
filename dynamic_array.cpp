#include <iostream>
#include <vector>
using namespace std;

int main()
{
	const int size = 3;
	int list[size] = { 10,20,30 };

	int length = 3;
	cout << "Enter list length : ";
	cin >> length;
	int* list2 = new int[length];

	int* begin = list2;
	int* end = list2 + length;

	for (int* curr = begin; curr != end; curr++)
	{
		cout << "Enter *curr value : ";
		cin >> *curr;
	}

	cout << "*curr : " << endl;
	for (int* curr = begin; curr != end; curr++)
	{
		cout << *curr << '\t';
	}
	cout << endl;

	delete[] list2;

	return 0;
}