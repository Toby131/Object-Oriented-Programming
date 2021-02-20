#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vector1(10), vector2(10);

	for (int i = 0; i < vector1.size(); i++)
	{
		vector1[i] = rand() % 11;
	}

	for (int j = 0; j < vector2.size(); j++)
	{
		vector2[j] = rand() % 21;
	}
	
	cout << "<vector 1>" << endl;
	for (auto elem : vector1)
	{
		cout << elem << " ";
	}

	cout << endl << "<vector 2>" << endl;
	for (auto elem : vector2)
	{
		cout << elem << " ";
	}
	cout << endl << endl;

	auto iter_begin1 = vector1.begin() ;
	auto iter_end1 = vector1.end();
	auto max1 = iter_begin1;
	for (auto& elem : vector1)
	{
		if (elem > * max1) { *max1 = elem; }
	}
	auto iter_begin2 = vector2.begin();
	auto iter_end2 = vector2.end();
	auto max2 = iter_begin2;
	for (auto& elem : vector2)
	{
		if (elem > * max2) { *max2 = elem; }
	}
	cout <<"ÃÖ´ñ°ª = " << *max1 * *max2 << endl;

	auto min1 = iter_begin1;
	for (auto& elem : vector1)
	{
		if (elem < * min1) { *min1 = elem; }
	}
	auto min2 = iter_begin2;
	for (auto& elem : vector2)
	{
		if (elem < *min2) { *min2 = elem; }
	}

	cout << "ÃÖ¼Ú°ª = " << *min1 * *min2 << endl;
	return 0;
}