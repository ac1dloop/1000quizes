#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Проверить истинность высказывания: «Среди трех данных целых
	//чисел есть хотя бы одна пара совпадающих».
	double a,b,c;
	cout << "enter 3 numbers\n";
	cin >> a >> b >> c;
	cout << ((a==b)||(b==c)||(a==c));
	return 0;
}
