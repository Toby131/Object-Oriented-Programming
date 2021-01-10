#include <iostream>
#include <string>

using namespace std;

int main()
{
	string data = "사랑,프로그래밍,의자,사랑의바보,영통역,천년의사랑,냉장고,객체지향";
	string keyword;

	cout << "키워드 : ";
	cin >> keyword;

	cout << "검색결과 : ";

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