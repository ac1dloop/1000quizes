#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано трехзначное число. Проверить истинность высказывания:
	//«Все цифры данного числа различны».
	int a,b,c;
	cin >> a;
	c=a%10;
	a/=10;
	b=a%10;
	a/=10;
	cout << ((a!=b)&&(a!=c)&&(b!=c));
	return 0;
}
