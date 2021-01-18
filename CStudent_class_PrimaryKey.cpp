#include <iostream>
#include <string>
using namespace std;

class CStudent
{
private:

    int number;
    string name;
    string major;

public:
    CStudent(int _number, string _name, string _major) : number(_number), name(_name), major(_major) {}

    CStudent()
    {
        number = 0;
        name = "xxx";
        major = "x��";
    }

    void Display()
    {
        cout << "�й� : " << getNumber() << endl;
        cout << "�̸� : " << getName() << endl;
        cout << "���� : " << getMajor() << endl << endl;
    }

    void setNumber(int _number)
    {
        number = _number;
    }

    void setName(string _name)
    {
        name = _name;
    }

    void setMajor(string _major)
    {
        major = _major;
    }

    int getNumber()
    {
        return number;
    }

    string getName()
    {
        return name;
    }

    string getMajor()
    {
        return major;
    }
};

int main()
{
    CStudent s[3]; //3���� �л� ����
    int inputNumber;
    string inputName, inputMajor;
    int length = 0;

    while (1)
    {
        for (length = 0; length < 3; length++)
        {
            cout << length + 1 << "��° �л� �Է�" << endl;
            cout << "�й� : ";
            cin >> inputNumber;
            cout << "�̸� : ";
            cin >> inputName;
            cout << "���� : ";
            cin >> inputMajor;
            s[length].setNumber(inputNumber);
            s[length].setName(inputName);
            s[length].setMajor(inputMajor);
            cout << "���Է� �Ϸ�" << endl << endl;

            if (length == 1)
            {
                if (s[length - 1].getNumber() == s[length].getNumber())
                {
                    cout << "���ߺ��� �й��� �����մϴ�" << endl << endl;
                    cout << length + 1 << "��° �л� �Է�" << endl;
                    cout << "�й� : ";
                    cin >> inputNumber;
                    cout << "�̸� : ";
                    cin >> inputName;
                    cout << "���� : ";
                    cin >> inputMajor;
                    s[length].setNumber(inputNumber);
                    s[length].setName(inputName);
                    s[length].setMajor(inputMajor);
                    cout << "���Է� �Ϸ�" << endl << endl;
                }
                else
                {
                    s[1].setNumber(inputNumber);
                    s[1].setName(inputName);
                    s[1].setMajor(inputMajor);
                }
            }
            else if (length == 2)
            {
                if (s[length - 1].getNumber() == s[length].getNumber() || s[length - 2].getNumber() == s[length].getNumber())
                {
                    cout << "���ߺ��� �й��� �����մϴ�" << endl << endl;
                    cout << length + 1 << "��° �л� �Է�" << endl;
                    cout << "�й� : ";
                    cin >> inputNumber;
                    cout << "�̸� : ";
                    cin >> inputName;
                    cout << "���� : ";
                    cin >> inputMajor;
                    s[length].setNumber(inputNumber);
                    s[length].setName(inputName);
                    s[length].setMajor(inputMajor);
                    cout << "���Է� �Ϸ�" << endl << endl;
                }
                else
                {
                    s[2].setNumber(inputNumber);
                    s[2].setName(inputName);
                    s[2].setMajor(inputMajor);

                }
            }
        }
        cout << "----��� �Է��� �Ϸ�Ǿ����ϴ�----" << endl;
        for (int i = 0; i < 3; i++)
        {
            s[i].Display();
        }
        break;
    }

    return 0;
}