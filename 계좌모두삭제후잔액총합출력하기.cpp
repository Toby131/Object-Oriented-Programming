#include <iostream>
using namespace std;

class Account
{
private:
	string name;
	string id;
	int balance;
	static int sum_bal;
public:
	Account() : id(""), name(""), balance(0) {}
	void setName(string _name)  { name = _name; }
	void setId(string _id)  { id = _id; }
	void setBal(int _bal) { balance = _bal; sum_bal += balance; }
	string getId() const { return id; }
	static int getSum_bal() { return sum_bal; }
};
int Account::sum_bal = 0;
int main()
{
	int number;
	cout << "�� �л� �� �Է� : ";
	cin >> number;
	Account* acnt = new Account[number];
	
	for (int i = 0; i < number; i++)
	{
		cout << i + 1 << "��° �л� ���� �Է�" << endl;
		string name, id;
		int balance;
		cout << "�й� : ";
		cin >> id;
		cout << "�̸� : ";
		cin >> name;
		cout << "�ܾ� : ";
		cin >> balance;
		cout << "===========================================" << endl;

		for (int j = 0; j < i; j++)
		{
			if (id == acnt[j].getId())
			{
				cout << "�ߺ��� �й��� �����մϴ�." << endl;
				cout << "���α׷��� �����մϴ�. " << endl;
				exit(100);
			}
		}

		acnt[i].setId(id);
		acnt[i].setName(name);
		acnt[i].setBal(balance);
	}

	cout << "ȸ���� �ݾ� : " << Account::getSum_bal() << endl;
	delete[] acnt;

	return 0;
}