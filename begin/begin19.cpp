#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны координаты двух противоположных вершин прямоугольника:
	//( x 1 , y 1  ), ( x 2 , y 2  ). Стороны прямоугольника параллельны осям координат.
	//Найти периметр и площадь данного прямоугольника.
	double x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double a=x2-x1;
	double b=y2-y1;
	cout << 2*(a+b) << " " << a*b << endl;
	return 0;
}
