#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Найти длину окружности L и площадь круга S заданного радиуса R:
	//L = 2·π·R,
	//S = π·R 2 .
	//В качестве значения π использовать 3.14.
	double r,Pi=3.14159265359;
	cin >> r;
	cout << "Length: " << 2*Pi*r << " Area: " << Pi*r*r << endl;

	return 0;
}
