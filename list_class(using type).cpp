#include <iostream>
using namespace std;

int command()
{
	int num;
	cout << "\t\t----menu----" << endl;
	cout << "\t1. 리스트 추가" << endl;
	cout << "\t2. 리스트 삭제" << endl;
	cout << "\t3. 리스트 출력" << endl;
	cout << "\t4. 프로그램 종료" << endl;
	cout << "\n\t 입력 --> ";
	cin >> num;
	return num;
}

template <typename T>
class CList
{
public:
	CList();
	~CList();

	bool IsEmpty()
	{
		if (m_Length == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bool IsFull()
	{
		if (m_Length == 5)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	void Add(T data)
	{
		if (IsFull() == 1)
		{
			cout << "List if full." << endl;
		}

		else
		{
			for (int i = 0; i < 5; i++)
			{
				if (data == m_Array[i])
				{
					cout << "중복된 데이터가 존재합니다." << endl;
				}
			}
			m_Array[m_Length] = data;
			m_Length++;

			for (int j = 0; j < m_Length-1; j++)
			{
				for (int k = 1; k < m_Length - j; k++)
				{
					if (m_Array[k - 1] > m_Array[k])
					{
						int temp;
						temp = m_Array[k - 1];
						m_Array[k - 1] = m_Array[k];
						m_Array[k] = temp;
					}
				}
			}
		}
	}

	void Delete(T data)
	{
		if (IsEmpty == 1)
		{
			cout << "List is empty." << endl;
		}
		else
		{
			for (int i = 0; i < m_Length; i++)
			{
				if (data == m_Array[i])
				{
					m_Length--;
					for (int j = 1; j < m_Length; j++)
					{
						m_Array[j] = m_Array[j + 1];
					}
				}
			}
		}
	}

	void Print()
	{
		cout << "※ Current List " << endl;
		for (auto elem : m_Array)
		{
			cout << elem << " ";
		}
	}

private:
	T m_Array[5];
	int m_Length;
};

int main()
{
	CList<int> list;
	int input;
	int com;
	while (1)
	{
		com = command();
		switch (com)
		{
		case 1:
			cout << "\n추가할 데이터 : ";
			cin >> input;
			list.Add(input);
			break;
		case '2':
			cout << "\n삭제할 데이터 : ";
			cin >> input;
			list.Delete(input);
			break;
		case'3':
			list.Print();
			break;
		case'4':
			cout << "\n\t프로그램을 종료합니다.\n";
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}