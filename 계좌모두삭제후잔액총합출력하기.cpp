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
	cout << "총 학생 수 입력 : ";
	cin >> number;
	Account* acnt = new Account[number];
	
	for (int i = 0; i < number; i++)
	{
		cout << i + 1 << "번째 학생 계좌 입력" << endl;
		string name, id;
		int balance;
		cout << "학번 : ";
		cin >> id;
		cout << "이름 : ";
		cin >> name;
		cout << "잔액 : ";
		cin >> balance;
		cout << "===========================================" << endl;

		for (int j = 0; j < i; j++)
		{
			if (id == acnt[j].getId())
			{
				cout << "중복된 학번이 존재합니다." << endl;
				cout << "프로그램을 종료합니다. " << endl;
				exit(100);
			}
		}

		acnt[i].setId(id);
		acnt[i].setName(name);
		acnt[i].setBal(balance);
	}

	cout << "회수된 금액 : " << Account::getSum_bal() << endl;
	delete[] acnt;

	return 0;
}