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
		cout << "문자열 하나를 입력해주세요 : ";
		cin >> word;

		if (word == "q" || word == "Q") { break; }
		else
		{
			cout << "입력하신 문자열의 역순 : " << reverse_func(word) << endl;

			if (word == reverse_func(word))
			{
				cout << "이 문자는 회문입니다." << endl << endl;
			}
			else
			{
				cout << "이 문자는 회문이 아닙니다. " << endl << endl;
			}
		}
	}
	return 0;
}