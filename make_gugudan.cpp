#include <iostream>
using namespace std;

int main()
{
	int dan = 1;

	while (dan != -1)
	{
		cout << "�� ���� �Է��ϼ��� : ";
		cin >> dan;

		if (dan == -1)
		{
			cout << "�����մϴ�." << endl;
			break;
		}
		else if (dan < 1 || dan > 9)
		{
			cout << "1 ���� 9������ ������ �Է����ּ���." << endl << endl;
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