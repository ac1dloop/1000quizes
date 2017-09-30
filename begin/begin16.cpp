#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Найти расстояние между двумя точками с заданными координатами
	//x 1 и x 2 на числовой оси: | x 2 – x 1 |.
	double x1,x2;
	cin >> x1 >> x2;
	cout << abs(x2-x1) << endl;
	return 0;
}
