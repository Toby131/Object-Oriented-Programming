#include <iostream>
#include <string>

using namespace std;

int main()
{
	string city, area, street, building;
	cout << "�� : ";
	cin >> city;
	cout << "�� : ";
	cin >> area;
	cout << "�� : ";
	cin >> street;
	cout << "�ǹ��� : ";
	cin >> building;

	string output;
	output = city + area + street + building;
	cout << "�� �ּ� : " << output << endl;

	return 0;
}