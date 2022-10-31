#include"Header.h"
using namespace std;
class Point
{
	int x;
	int y;
public:

	Point()
	{
		x = y = 0;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	Point& operator=(int a)
	{
		x = a;
		y = a;
		return *this;
	}
	Point& operator+(int a)
	{
		Point zerg(*this);
		zerg.x += a;
		zerg.y += a;
		return zerg;
	}
};
int main()
{
	MyArray<int> arrInt(5);
	arrInt.Random();
	arrInt.Print();

	MyArray<Point> Myobj(3);
	Myobj.Random();
	//Myobj.Print(); //  <<

	MyArray<Point> zerg = Myobj + 5;
	MyArray<Point> zerg2 = 5 + Myobj;

	if (zerg > zerg2)
	{
		cout << "zerg>zerg2\n";
	}

}