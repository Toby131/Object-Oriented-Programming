#include <iostream>
using namespace std;

int* make_arr(int n)
{
	int* array = new int[n];
	array[0] = 1;
	for (int i = 1 ; i < n; i++)
	{
		array[i] = 2*i + 1;
	}
	return array;
	delete[] array;
}

void print_arr(int* a, int n)
{
	cout << "\n Odd Number Array : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int sum_arr(int* a, int n)
{
	int s = 0;
	while (n)
	{
		s += *a;
		a++;
		n--;
	}
	return s;
}

int main()
{
	int n;
	cout << "Enter a number : ";
	cin >> n;

	int* arr = make_arr(n);
	print_arr(arr, n);

	int sum = sum_arr(arr, n);
	cout << "\n Sum of the Array : " << sum << endl;

	delete[] arr;
	return 0;
}