#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны катеты прямоугольного треугольника a и b . Найти его гипоте-
	//нузу c и периметр P :
	double a,b;
	cin >> a >> b;
	cout << "hypotenuse " << sqrt(a*a+b*b) << " perimeter: " << a+b+sqrt(a*a+b*b) << endl;
	return 0;
}
