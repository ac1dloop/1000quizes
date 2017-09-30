#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дана длина L окружности. Найти ее радиус R и площадь S круга, ог-
	//раниченного этой окружностью, учитывая, что L = 2· π · R , S = π · R 2 . В ка-
	//честве значения π использовать 3.14.
	double l,r;
	const double Pi=3.14;
	cin >> l;
	r=l/2*Pi;
	cout << r << " " << Pi*r*r << endl;
	return 0;
}
