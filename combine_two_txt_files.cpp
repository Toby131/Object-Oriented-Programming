#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout("output.txt");
	ifstream fin1("input1.txt"), fin2("input2.txt");

	string line;

	while (getline(fin1, line))
	{
		fout << line << endl;
	}
	fout << endl;
	fin1.close();

	while (getline(fin2, line))
	{
		fout << line << endl;
	}
	fin2.close();

	return 0;
}