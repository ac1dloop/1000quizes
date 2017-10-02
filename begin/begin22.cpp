#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Поменять местами содержимое переменных A и B и вывести новые
	//значения A и B.
	double a,b;
	cin >> a >> b;
	double t=a;
	a=b;
	b=t;
	cout << a << " " << b;
	return 0;
}
