#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны целые числа a , b , c , являющиеся сторонами некоторого тре-
	//угольника. Проверить истинность высказывания: «Треугольник со сторо-
	//нами a , b , c является прямоугольным».
	int a,b,c;
	cin >> a >> b >> c;
	cout << ((sqrt(a*a+b*b)==c*c)||(sqrt(b*b+c*c)==a*a)||(sqrt(a*a+c*c)==b*b));
	return 0;
}
