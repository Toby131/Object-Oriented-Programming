#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Avengers
{
public:
	Avengers()
	{
		name = "";
		attack_point = 0;
		defense_point = 0;
		health = 0;
	}
	Avengers(string _name, int _attack_point, int _defense_point, int _health) :
		name(_name), attack_point(_attack_point), defense_point(_defense_point), health(_health) {}
	~Avengers() {}
	virtual void set(string _name, int _attack, int _defense, int _health) {}
	virtual int attack() { return 0;}
	virtual void defense(int _attack_point) {}
	virtual void print_info() {}
protected:
	string name;
	int attack_point;
	int defense_point;
	int health;
};

class Character : public Avengers
{
public:
	Character() : Avengers() {}
	Character(string _name, int _attack, int _defense, int _health) : Avengers(_name, _attack, _defense, _health) {}
	int attack() override { return attack_point; }
	void defense(int _attack_point) override
	{
		health = health - _attack_point + defense_point;
		if (health < 0)
		{
			health = 0;
		}
	}
	void operator=(const Character& chr)
	{
		this->name = chr.name;
		this->attack_point = chr.attack_point;
		this->defense_point = chr.defense_point;
		this->health = chr.health;
	}

	void print_info() override
	{
		cout << "Name : " << name << endl;
		cout << "Attack_Point : " << attack_point << endl;
		cout << "Defense_Point : " << defense_point << endl;
		cout << "Health : " << health << endl;
	}

	string get_name()
	{
		return name;
	}
	int get_health() { return health; }
};

int main()
{
	Character my_char;
	Character enemy_char;

	Character character[] = { Character("IronMan", 70, 40, 100),
							 Character("CaptainAmerica", 60, 50, 100),
							 Character("Thor",80, 30, 100) };
	string my_char_name;
	cout << "Choose your character(IronMan, CapainAmerica, Thor) : ";
	cin >> my_char_name;
	for (int i = 0; i < 3; i++)
	{
		if (my_char_name == character[i].get_name())
		{
			my_char = character[i];
		}
	}

	srand(time(NULL));
	int enemy_num = rand() % 3;
	enemy_char = character[enemy_num];

	cout << "--My Character--" << endl;
	my_char.print_info();
	cout << "--Enemy Character--" << endl;
	enemy_char.print_info();

	cout << endl << "--Battle--" << endl;
	cout << "My Life : " << my_char.get_health() << '\t'
		<< "Enemy Life : " << enemy_char.get_health() << endl;

	while (1)
	{
		enemy_char.defense(my_char.attack());
		cout << "My Life : " << my_char.get_health() << '\t'
			<< "Enemy Life : " << enemy_char.get_health() << endl;
		if (my_char.get_health() == 0) { cout << "Enemy Win!"; break; }
		else if (enemy_char.get_health() == 0) { cout << "You Win!"; break; }

		my_char.defense(enemy_char.attack());
		cout << "My Life : " << my_char.get_health() << '\t'
			<< "Enemy Life : " << enemy_char.get_health() << endl;
		if (my_char.get_health() == 0) { cout << "Enemy Win!"; break; }
		else if (enemy_char.get_health() == 0) { cout << "Yu Win!"; break; }
	}

	return 0;
}