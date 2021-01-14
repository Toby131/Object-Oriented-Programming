#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
using Matrix = vector<vector<int>>;

void print(const Matrix& mat)
{
	//vector index �̿��ϱ�
	/*for (unsigned row = 0; row < mat.size(); row++)
	{
		for (unsigned col = 0; col < mat[row].size(); col++)
		{
			//mat.at(row).at(col);
			cout << setw(4) << mat[row][col];
		}
		cout << endl;
	}*/

	//vector ���� �̿��ϱ�
	/*for (const vector<int>& row : mat) 
	{
		for (int col : row) 
		{
			cout << setw(4) << col;
		}
		cout << endl;
	}*/

	//���߰����� ���, �ڷ��� �κ� auto ġȯ
	//vector<int> row = mat[0]; == auto<row> = mat[0];

	//auto�� ���� ���� �̿��ϱ�
	for (const auto& row : mat)
	{
		for (auto col : row)
		{
			cout << setw(4) << col;
		}
		cout << endl;
	}

}

int main()
{
	Matrix mat{ {1,2,3}, {4,5,6} };

	mat[0][0] = 1;
	mat[0][1] = 2;
	mat[0][2] = 3;
	mat[1][0] = 4;
	mat[1][1] = 5;
	mat[1][2] = 6;

	print(mat);
	
	return 0;
}