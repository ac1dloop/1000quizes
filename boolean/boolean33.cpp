#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны целые числа a , b , c . Проверить истинность высказывания:
	//«Существует треугольник со сторонами a , b , c ».
	int a,b,c;
	cin >> a >> b >> c;
	cout << ((a+b>c)&&(a+c>b)&&(b+c)>a);
	return 0;
}
