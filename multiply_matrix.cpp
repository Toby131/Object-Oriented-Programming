#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void initialize(vector<vector<int>>& v, int vRow, int vCol)
{
	vector<int> v2;
	for (int row = 0; row < vRow; row++)
	{
		for (int col = 0; col < vCol; col++)
		{
			v.push_back(v2);
			v[row].push_back(rand() % 19 - 10);
		}
	}
}

void print(vector<vector<int>> &v)
{
	for (int row = 0; row < v.size(); row++)
	{
		for (int col = 0; col < v[row].size(); col++)
		{
			cout << setw(5) << v[row][col];
		}
		cout << endl;
	}
}

vector<vector<int>> mult(vector<vector<int>>& v, vector<vector<int>> v2)
{
	vector<vector<int>> vv2;
	vv2.resize(v.size());
	for (int i = 0; i < v[i].size(); i++)
	{
		vv2[i].resize(v2[i].size());
	}

	for (int i = 0; i < vv2.size(); i++)
	{
		for (int j = 0; j < vv2[i].size(); j++)
		{
			for (int k = 0; k < v[i].size(); k++)
			{
				vv2[i][j] += v[i][k] * v2[k][j];
			}
		}
	}
	return vv2;
}

int main()
{
	cout << "A�� ��, ���� ũ�⸦ �Է����ּ��� : ";
	int rowA, colA;
	cin >> rowA >> colA;

	cout << "B�� ��, ���� ũ�⸦ �Է����ּ��� : ";
	int rowB, colB;
	cin >> rowB >> colB;
	cout << endl;

	vector<vector<int>> A;
	initialize(A, rowA, colA);
	vector<vector<int>> B;
	initialize(B, rowB, colB);
	vector<vector<int>> AB = mult(A, B);

	//��� ���� ���ϴ� ���ǽ�, ���� �޽���
	if (rowA == 0 || colA == 0 || rowB == 0 || colB == 0)
	{
		cout << "����� ������ �� �����ϴ�.";
	}

	else
	{
		cout << "A ��� :" << endl;
		//A��� ���
		print(A);

		cout << "B ��� :" << endl;
		//B��� ���
		print(B);

		//��� ���� �� ���� ���ǽ�, ���� �޽���
		if (colA == rowB)
		{
			cout << "AB ����� : " << endl;
			print(AB);
		}

		else
		{
			cout << "�� ����� ���� �� �����ϴ�. " << endl;
		}
	}
	return 0;
}