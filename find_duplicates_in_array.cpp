#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int number;
		cout << "Please enter a number : ";
		cin >> number;

		if (number < 2)
		{
			cout << "Wrong number!!!";
			break;
		}
		else
		{
			cout << "Size of random array : " << number / 2 << endl;

			int* array = new int[number / 2];

			for (int i = 0; i < number / 2; i++)
			{
				array[i] = rand() % number + 1;
			}

			cout << "[ Array ]" << endl;

			for (int i = 0; i < number / 2; i++)
			{
				cout << array[i] << " ";
			}
			cout << endl;

			bool check = 0;
			for (int i = 0; i < (number / 2) - 1; i++)
			{
				for (int j = i + 1; j < (number / 2); j++)
				{
					if (array[i] == array[j])
					{
						check = true;
					}
				}
			}

			if (check == 1)
			{
				cout << "Duplicates found." << endl << endl;
			}
			else
			{
				cout << "Duplicates not found." << endl << endl;
			}
		}
	}
	
	return 0;
}