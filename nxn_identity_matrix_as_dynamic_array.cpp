#include <iostream>
using namespace std;

int** buildTable(int n)
{
	int** array = new int* [n];
	for (int i = 0; i < n; i++)
	{
		array[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			array[i][j] = 0;
		}
	}
	return array;
}
void make_identity_matrix(int** table, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				table[i][j] = 1;
			}
		}
	}
}
void printTable(int** table, int n)
{
	cout << "Output : " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << table[i][j] << "\t\t";
		}
		cout << endl;
	}
}

int main()
{
	int n = 0;
	cout << "N�� �Է��Ͻÿ� : ";
	cin >> n;
	if (n < 1)
	{
		cout << "\n����� ������ �� �����ϴ�. \n" << endl;
		exit(EXIT_FAILURE);
	}

	int** table = buildTable(n);
	make_identity_matrix(table, n);
	printTable(table, n);

	for (int i = 0; i < n; i++)
	{
		delete[] table[i];
	}
	delete[] table;

	return 0;
}
