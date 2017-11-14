#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано трехзначное число. Проверить истинность высказывания:
	//«Цифры данного числа образуют возрастающую или убывающую после-
	//довательность».
	int a,b,c;
	cin >> a;
	c=a%10;
	a/=10;
	b=a%10;
	a/=10;
	cout << (((a<b)&&(b<c))||((a>b)&&(b>c)));
	return 0;
}
