#include <iostream>
using namespace std;

int main()
{
	int dan = 1;

	while (dan != -1)
	{
		cout << "단 수를 입력하세요 : ";
		cin >> dan;

		if (dan == -1)
		{
			cout << "종료합니다." << endl;
			break;
		}
		else if (dan < 1 || dan > 9)
		{
			cout << "1 부터 9까지의 정수를 입력해주세요." << endl << endl;
			continue;
		}
		else
		{
			for (int i = 1; i < 10; i++)
			{
				cout << dan << " * " << i << " = " << dan * i << endl;
			}
			cout << endl;
			continue;
		}
	}


	return 0;
}