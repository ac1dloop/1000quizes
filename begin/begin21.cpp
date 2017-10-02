#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны координаты трех вершин треугольника: ( x 1 , y 1  ), ( x 2 , y 2  ), ( x 3 , y 3  ).
	//Найти его периметр и площадь, используя формулу для расстояния между
	//двумя точками на плоскости (см. задание Begin20). Для нахождения пло-
	//щади треугольника со сторонами a , b , c использовать формулу Герона :
	struct Point{
		double x;
		double y;
	};
	
	Point p1,p2,p3;
	
	cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;

	//Got sides
	double a=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	double b=sqrt((p2.x-p3.x)*(p2.x-p3.x)+(p2.y-p3.y)*(p2.y-p3.y));
	double c=sqrt((p3.x-p1.x)*(p3.x-p1.x)+(p3.y-p1.y)*(p3.y-p1.y));
	//p - half-perimeter of triangle
	double p=(a+b+c)/2;
	//Heron's formula
	cout << "Area: " << (double)sqrt(p*(p-a)*(p-b)*(p-c));
	
	return 0;
}
