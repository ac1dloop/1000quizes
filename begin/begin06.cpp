#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны длины ребер a, b, c прямоугольного параллелепипеда. Найти его
	//объем V = a·b·c и площадь поверхности S = 2·(a·b + b·c + a·c).
	
	double a,b,c;
	cin >> a >> b >> c;

	cout << "V: " << a*b*c << " S: " << 2*(a*b+b*c+a*c) << endl;

	return 0;
}
