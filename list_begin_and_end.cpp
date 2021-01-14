#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
using Matrix = vector<vector<int>>;

void print(int* begin, int* end)
{
	cout << "list : ";
	for (int* curr = begin; curr != end; curr++)
	{
		cout << setw(4) << *curr;
	}

	/*int* curr = begin;
	while (curr != end)
	{
		cout << setw(4) << *curr;
		curr++;
	}*/
	cout << endl;
}

int main()
{
	int list[3] = { 10, 20, 30 };
	cout << "list[0]�� �ּҰ� : " << (list + 0) << "\t" << "list[0]�� �� : " << *(list + 0) << endl;
	cout << "list[1]�� �ּҰ� : " << (list + 1) << "\t" << "list[1]�� �� : " << *(list + 1) << endl;
	cout << "list[2]�� �ּҰ� : " << (list + 2) << "\t" << "list[2]�� �� : " << *(list + 2) << endl;

	int* begin = list;
	int* end = list + 3;
	print(begin, end);
	
	return 0;
}