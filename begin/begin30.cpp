#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано значение угла α в радианах (0 < α < 2·π). Определить значение
	//этого же угла в градусах, учитывая, что 180° = π радианов. В качестве зна-
	//чения π использовать 3.14.
	const double Pi=3.14;
	double a;
	cin >> a;
	cout << (180/Pi)*a;
	return 0;
}
