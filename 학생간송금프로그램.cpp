#include <iostream>
using namespace std;

class Account
{
private:
	string name;
	string id;
	int balance;
public:
	Account(string _name, string _id, int _bal) : name(_name), id(_id), balance(_bal) {}
	string getName() const { return name; }
	string getId() const { return id; }
	int getBal() const { return balance; }
	void operator+(Account& acc) { this->balance += acc.balance; }
	void operator-(Account& acc) { this->balance -= acc.balance; }
};
ostream& operator<<(ostream& cout, const Account& acc)
{
	cout << "학번 : " << acc.getId() << ", 이름 : " << acc.getName() << ", 잔액 : " << acc.getBal();
	return cout;
}

int main()
{
	Account acnt[3] = { Account("장윤호", "2014", 10000),
						Account("김유민", "2019", 0),
						Account("박진배", "2013", 5000), };

	string wdrwID;
	string deposID;
	while (true)
	{
		cout << "돈을 보낼 학생의 학번을 입력하세요 : ";
	    cin >> wdrwID;
	
	    if (wdrwID == "종료")
	    {
	        cout << "종료합니다. " << endl;
	        for (int i = 0; i < 3; i++)
	        {
	            cout << acnt[i] << endl;
			}
			exit(100);
	    }
	
	    cout << "돈을 받을 학생의 학번을 입력하세요 : ";
	    cin >> deposID;
	    if (wdrwID == deposID)
	    {
	        continue;
	    }
	
	    int s1 = 1;
	    int s2 = 1;
	    int j = 0;
	    for (j; j < 3; j++)
	    {
	        if (wdrwID == acnt[j].getId())
	        {
	            s1 = 0;
	            break;
	        }
	    }
		if (s1)
		{
			cout << "보내는 학생 혹은 받은 학생의 학번이 존재하지 않습니다. 다시 입력해주세요." << endl;
	        continue;
	    }
	    int k = 0;
	    for (k; k < 3; k++)
	    {
	        if (deposID == acnt[k].getId())
	        {
	            s2 = 0;
	            break;
	        }
	    }
		if (s2)
		{
			continue;
			cout << "보내는 학생 혹은 받은 학생의 학번이 존재하지 않습니다. 다시 입력해주세요." << endl;
		}

		if (acnt[j].getBal() == 0)
		{
			cout << "보내는 학생의 잔액이 부족합니다." << endl;
			continue;
		}

		acnt[k] + acnt[j];
		acnt[j] - acnt[j];
		cout << "보낸 학생의 잔액 => " << acnt[j] << endl;
		cout << "받은 학생의 잔액 => " << acnt[k] << endl;
	}

	return 0;
	}