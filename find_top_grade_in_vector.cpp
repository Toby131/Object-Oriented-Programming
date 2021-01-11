#include <iostream>
#include <vector>

using namespace std;

int inputGrade(float grade)
{
	cin >> grade;
	if ((grade - (int)grade) != 0.0 || grade < 0 || grade > 100)
	{
		cout << "Invalid input!!!" << endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		return (int)grade;
	}
}

int* topGrade(const vector<int>& grade)
{
	int topgrade;
	if (grade[0] > grade[1])
	{
		if (grade[0] > grade[2])
		{
			topgrade = grade[0];
		}
		else
		{
			topgrade = grade[2];
		}
	}
	else
	{
		if (grade[1] > grade[2])
		{
			topgrade = grade[1];
		}
		else
		{
			topgrade = grade[2];
		}
	}	
	return &topgrade;
}

int main()
{
	vector<int> grades;
	float _grade = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "input " << i << "-th grade(0~100) : ";
		int grade = inputGrade(_grade);
		grades.push_back(grade);
	}

	cout << "Top Grade : " << *topGrade(grades);
	return 0;
}