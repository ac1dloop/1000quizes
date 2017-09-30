#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дана площадь S круга. Найти его диаметр D и длину L окружности,
	//ограничивающей этот круг, учитывая, что L = π · D , S = π · D 2 /4. В качестве
	//значения π использовать 3.14.
	double s,d;
	const double Pi=3.14;
	cin >> s;
	d=sqrt(4*s/Pi);
	cout << d << " " << Pi*d << endl;
	return 0;
}
