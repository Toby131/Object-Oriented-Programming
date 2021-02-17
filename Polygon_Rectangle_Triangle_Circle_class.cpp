#include <iostream>
using namespace std;

class Polygon
{
public:
	Polygon() {}
	Polygon(int point, float length)
	{
		mPoint = point;
		mLength = length;
	}
	~Polygon() {}
	virtual void calcPerimeter() { cout << "Perimeter : empty" << endl; }
	virtual void calcArea() { cout << "Area : empty" << endl; }
protected:
	int mPoint;
	double mLength;
};

class Rectangle : public Polygon
{
public:
	Rectangle() {}
	Rectangle(int point, float length) : Polygon(point, length) {}
	~Rectangle() {}
	void calcPerimeter() override { cout << "Perimeter : " << mPoint * mLength << endl; }
	void calcArea() override { cout << "Area : " << mLength * mLength << endl; }
};

class Triangle : public Polygon
{
public:
	Triangle() {}
	Triangle(int point, float length) : Polygon(point, length) {}
	~Triangle() {}
	void calcPerimeter() override { cout << "Perimeter : " << mPoint * mLength << endl; }
	void calcArea() override { cout << "Area : " << sqrt((mLength * mLength) - (mLength / 2) * (mLength / 2)) * mLength * 0.5 << endl; }
};

class Circle : public Polygon
{
public:
	Circle() {}
	Circle(int point, float length) : Polygon(point, length) {}
	~Circle() {}
	void calcPerimeter() override { cout << "Perimeter : " << 2 * 3.14 * mLength << endl; }
	void calcArea() override { cout << "Area : " << 3.14 * mLength * mLength << endl; }
};
int main()
{
	Triangle tri(3, 10);
	Rectangle rec(4, 10);
	Circle cir(0, 5);
	cout << "---Triangle class---" << endl;
	tri.calcPerimeter();
	tri.calcArea();
	cout << "---Rectangle class---" << endl;
	rec.calcPerimeter();
	rec.calcArea();
	cout << "---Circle class---" << endl;
	cir.calcPerimeter();
	cir.calcArea();
	return 0;
}