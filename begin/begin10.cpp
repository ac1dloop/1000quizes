#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны два ненулевых числа. Найти сумму, разность, произведение и
	//частное их квадратов.
	double a,b;
	cin >> a >> b;
	if (a==0||b==0)
		return 1;
	a*=a;
	b*=b;
	cout << a+b << " " << a-b << " " << a*b << " " << a/b << endl;
	return 0;
}
