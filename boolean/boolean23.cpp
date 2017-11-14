#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано четырехзначное число. Проверить истинность высказывания:
	//«Данное число читается одинаково слева направо и справа налево».
	int a,b,c,d;
	cin >> a;
	d=a%10;
	a/=10;
	c=a%10;
	a/=10;
	b=a%10;
	a/=10;
	cout << ((a==d)&&(b==c));
	return 0;
}
