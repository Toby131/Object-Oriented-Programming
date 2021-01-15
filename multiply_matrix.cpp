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
	cout << "A의 행, 열의 크기를 입력해주세요 : ";
	int rowA, colA;
	cin >> rowA >> colA;

	cout << "B의 행, 열의 크기를 입력해주세요 : ";
	int rowB, colB;
	cin >> rowB >> colB;
	cout << endl;

	vector<vector<int>> A;
	initialize(A, rowA, colA);
	vector<vector<int>> B;
	initialize(B, rowB, colB);
	vector<vector<int>> AB = mult(A, B);

	//행렬 생성 못하는 조건시, 오류 메시지
	if (rowA == 0 || colA == 0 || rowB == 0 || colB == 0)
	{
		cout << "행렬을 생성할 수 없습니다.";
	}

	else
	{
		cout << "A 행렬 :" << endl;
		//A행렬 출력
		print(A);

		cout << "B 행렬 :" << endl;
		//B행렬 출력
		print(B);

		//행렬 곱할 수 없는 조건시, 오류 메시지
		if (colA == rowB)
		{
			cout << "AB 곱행렬 : " << endl;
			print(AB);
		}

		else
		{
			cout << "두 행렬을 곱할 수 없습니다. " << endl;
		}
	}
	return 0;
}