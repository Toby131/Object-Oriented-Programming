#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout("output.txt");

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int output = rand() % 101;
			fout << output << '\t';
		}
		fout << endl;
	}

	return 0;
}