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
	cout << "�й� : " << acc.getId() << ", �̸� : " << acc.getName() << ", �ܾ� : " << acc.getBal();
	return cout;
}

int main()
{
	Account acnt[3] = { Account("����ȣ", "2014", 10000),
						Account("������", "2019", 0),
						Account("������", "2013", 5000), };

	string wdrwID;
	string deposID;
	while (true)
	{
		cout << "���� ���� �л��� �й��� �Է��ϼ��� : ";
	    cin >> wdrwID;
	
	    if (wdrwID == "����")
	    {
	        cout << "�����մϴ�. " << endl;
	        for (int i = 0; i < 3; i++)
	        {
	            cout << acnt[i] << endl;
			}
			exit(100);
	    }
	
	    cout << "���� ���� �л��� �й��� �Է��ϼ��� : ";
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
			cout << "������ �л� Ȥ�� ���� �л��� �й��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���." << endl;
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
			cout << "������ �л� Ȥ�� ���� �л��� �й��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���." << endl;
		}

		if (acnt[j].getBal() == 0)
		{
			cout << "������ �л��� �ܾ��� �����մϴ�." << endl;
			continue;
		}

		acnt[k] + acnt[j];
		acnt[j] - acnt[j];
		cout << "���� �л��� �ܾ� => " << acnt[j] << endl;
		cout << "���� �л��� �ܾ� => " << acnt[k] << endl;
	}

	return 0;
	}