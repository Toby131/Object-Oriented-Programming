#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student
{
private:
	string name;
	int number;
	string department;
	vector<string> subject;
	vector<char> grade;

public:
	Student(string _name = "default", int _num = 0, string _depart = "depart") : name(_name), number(_num), department(_depart) {}
	void setName(string _name)
	{
		name = _name;
	}
	void setID(int _num)
	{
		number = _num;
	}
	void setDpt(string _depart)
	{
		department = _depart;
	}
	void addGrade(string _subj, char _grad)
	{
		subject.push_back(_subj);
		grade.push_back(_grad);
	}
	void printGrades()
	{
		for (int i = 0; i < subject.size(); i++)
		{
			cout << subject[i] << " " << grade[i] << endl;
		}
		getGPA();
	}
	void getGPA()
	{
		for (int i = 0; i < grade.size(); i++)
		{
			if (grade[i] == 'A') { grade[i] = 4; }
			else if (grade[i] == 'B') { grade[i] = 3; }
			else if (grade[i] == 'C') { grade[i] = 2; }
			else if (grade[i] == 'D') { grade[i] = 1; }
			else if (grade[i] == 'F') { grade[i] = 0; }
		}
		float output = 0;
		for (int i = 0; i < grade.size(); i++)
		{
			output += grade[i];
		}
		cout << "GPA : " << output / grade.size();
	}
	void print()
	{
		cout << name << " " << number << " " << department << endl;
	}

	void getYear(int year)
	{
		int numyear = number / 1000000;
		if ((year - numyear) == 0){	cout << "Freshmen(1학년)" << endl; }
		else if ((year - numyear) == 1) { cout << "Sophomore(2학년)" << endl; }
		else if ((year - numyear) == 2) { cout << "Junior(3학년)" << endl; }
		else if ((year - numyear) == 3) { cout << "Senior(4학년)" << endl; }
		else { cout << "About to graduate(5학년 이상)" << endl; }
	}
};

int main()
{
	Student Harry("Harry", 2017310973, "CS");
	Harry.print();
	Harry.getYear(2019);
	Harry.addGrade("programming", 'A');
	Harry.addGrade("Basic Circuit", 'B');
	Harry.printGrades();
	cout << "\n\n";

	Student Ron;
	Ron.print();
	cout << "\n";
	Ron.setName("Ron");
	Ron.setID(2014103959);
	Ron.setDpt("EE");
	Ron.print();
	Ron.getYear(2019);
	Ron.addGrade("Computer Architecture", 'B');
	Ron.addGrade("Machine Learning", 'B');
	Ron.addGrade("Computer Vision", 'C');
	Ron.printGrades();
	cout << "\n\n";
	return 0;
}