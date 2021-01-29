#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void setXY(int _x, int _y)
	{
		this->x = _x;
		this->y = _y;
	}
	int getX() const
	{
		return this->x;
	}
	int getY() const
	{
		return this->y;
	}
	Point operator*(const Point& pt)
	{
		Point result(this->x * pt.getX(), this->y * pt.getY());
		return result;
	}
	Point operator-(const Point& pt)
	{
		Point result2(this->x - pt.getX(), this->y - pt.getY());
		return result2;
	}
	Point operator=(const Point& pt)
	{
		this->x = pt.x;
		this->y = pt.y;
		return (*this);
	}
};
ostream& operator<<(ostream& cout, const Point& pt)
{
	cout << pt.getX();
	return cout;
}
int main()
{
	int x1 = 9, y1 = 0, x2 = 0, y2 = 0;
	Point* pP1, * pP2, * pP3;

	cout << "첫 번째 좌표(x1, y1)를 입력하세요 : ";
	cin >> x1 >> y1;
	cout << "두 번째 좌표(x2, y2)를 입력하세요 : ";
	cin >> x2 >> y2;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);
	pP3 = new Point();

	*pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);
	cout << "두 좌표 사이의 길이는 " << sqrt((*pP3).getX() + (*pP3).getY()) << "입니다." << endl;
	return 0;
}