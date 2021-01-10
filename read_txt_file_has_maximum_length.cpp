#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("original.txt");
	ofstream fout("original_output.txt");

	int length;
	cout << "length = ";
	cin >> length;
	char word;
	string output;

	while (fin.get(word))
	{
		if (word != '\n')
		{
			output += word;
		}
		else
		{
			output += " ";
		}

		if (output.size() == length)
		{
			fout << output << endl;
			output.clear();
		}
	}

	fout << output << endl;

	fout.close();
	fin.close();

	return 0;
}