#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Найти расстояние между двумя точками с заданными координатами
	//( x 1 , y 1  ) и ( x 2 , y 2  ) на плоскости. Расстояние вычисляется по формуле
	struct Point{
		int x;
		int y;
	};
	
	Point p1, p2;
	cin >> p1.x >> p1.y >> p2.x >> p2.y;
	cout << "Distance: " << sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y)) << endl;
	return 0;
}
