#include <iostream>
#include <vector>

using namespace std;

void reverse_vector(vector<int> &v)
{
	for (int i = 0; i < 5; i++)
	{
		int temp;
		temp = v[i];
		v[i] = v[9 - i];
		v[9 - i] = temp;
	}
}

int main()
{
	vector<int> vec(10);
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] = i+1;
	}
	cout << "�⺻ vector �� : " << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}

	cout << endl;
	reverse_vector(vec);

	cout << "�Լ� ���� �� Vector �� : " << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	return 0;
}