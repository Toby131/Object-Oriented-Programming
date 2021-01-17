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
        major = "x과";
    }

    void Display()
    {
        cout << "학번 : " << getNumber() << endl;
        cout << "이름 : " << getName() << endl;
        cout << "전공 : " << getMajor() << endl << endl;
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
    CStudent s1(2018000000, "홍길동", "컴퓨터공학과");
    s1.Display();

    CStudent s2(1999000000, "공지철", "연극영화과");
    s2.Display();

    s1.setNumber(2006000000);
    s1.setName("민경훈");
    s1.setMajor("포스트모던");
    cout << "학번 : " << s1.getNumber() << endl;
    cout << "이름 : " << s1.getName() << endl;
    cout << "전공 : " << s1.getMajor() << endl;

    return 0;
}