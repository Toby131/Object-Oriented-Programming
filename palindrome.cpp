#include <iostream>
#include <string>
using namespace std;

string reverse_func(string word)
{
	string reverse_word;
	int length = word.size();
	for (int i = 0; i < length; i++)
	{
		reverse_word += word[word.length() - 1];
		word = word.substr(0, word.length() - 1);
	}
	return reverse_word;
}

int main()
{
	string word;
	while (true)
	{
		cout << "���ڿ� �ϳ��� �Է����ּ��� : ";
		cin >> word;

		if (word == "q" || word == "Q") { break; }
		else
		{
			cout << "�Է��Ͻ� ���ڿ��� ���� : " << reverse_func(word) << endl;

			if (word == reverse_func(word))
			{
				cout << "�� ���ڴ� ȸ���Դϴ�." << endl << endl;
			}
			else
			{
				cout << "�� ���ڴ� ȸ���� �ƴմϴ�. " << endl << endl;
			}
		}
	}
	return 0;
}