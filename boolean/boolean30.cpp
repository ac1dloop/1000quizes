#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны целые числа a , b , c , являющиеся сторонами некоторого тре-
	//угольника. Проверить истинность высказывания: «Треугольник со сторо-
	//нами a , b , c является равносторонним».
	int a,b,c;
	cin >> a >> b >> c;
	cout << (a==b==c);
	return 0;
}
