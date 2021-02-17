#include <iostream>
using namespace std;

class Train
{
public:
	Train() {}
	Train(int people) { mPeople = people; }
	~Train() {}
	virtual int station(int takeOff, int takeOn)
	{
		mPeople =  mPeople - takeOff + takeOn;
		return mPeople;
	}
protected:
	int mPeople;
};

class Ktx : public Train
{
public:
	Ktx() : Train(0) {}
	Ktx(int people) : Train(people) {}
	~Ktx() {}
	int station(int takeOff, int takeOn) { return Train::station(takeOff, takeOn); }
	int getPeople() { return mPeople; }
};

int main()
{
	Ktx k;
	int off, on, max = 0;
	for (int i = 0; i < 5; i++)
	{
		while (true)
		{
			cout << i + 1 << "��°�� : ";
			cin >> off >> on;

			if (k.getPeople() - off < 0)
			{
				cout << "�����̴��Դϴ�." << endl;
			}
			else if (k.getPeople() - off + on > 300)
			{
				cout << "�����ʰ��Դϴ�." << endl;
			}
			else
			{
				k.station(off, on);
				if (k.getPeople() > max)
				{
					max = k.getPeople();
				}
				break;
			}
		}
	}

	cout << "���� ���� ����� ž������ ���� ��� �� : " << max << endl;
	return 0;
}