#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано значение угла α в градусах (0 < α < 360). Определить значение
	//этого же угла в радианах, учитывая, что 180° = π радианов. В качестве зна-
	//чения π использовать 3.14.
	const double Pi=3.14;
	double a;
	cin >> a;
	cout << (Pi/180)*a << " Rad" << endl;
	return 0;
}
