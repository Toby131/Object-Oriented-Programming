#include <iostream>
#include <string>

using namespace std;

int main()
{
	string data = "���,���α׷���,����,����ǹٺ�,���뿪,õ���ǻ��,�����,��ü����";
	string keyword;

	cout << "Ű���� : ";
	cin >> keyword;

	cout << "�˻���� : ";

	int index = 0;
	int lastindex = 0;
	string output;

	while (true)
	{
		lastindex = data.find(",", index);

		if (index >= data.size())
		{
			break;
		}
		else
		{
			output = data.substr(index, lastindex - index);
			if (output.find(keyword) != string::npos)
			{
				cout << output << "     ";
			}
			index += output.size() + 1;
		}
	}

	return 0;
}