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
    CStudent s1(2018000000, "ȫ�浿", "��ǻ�Ͱ��а�");
    s1.Display();

    CStudent s2(1999000000, "����ö", "���ؿ�ȭ��");
    s2.Display();

    s1.setNumber(2006000000);
    s1.setName("�ΰ���");
    s1.setMajor("����Ʈ���");
    cout << "�й� : " << s1.getNumber() << endl;
    cout << "�̸� : " << s1.getName() << endl;
    cout << "���� : " << s1.getMajor() << endl;

    return 0;
}