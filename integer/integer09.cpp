#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано трехзначное число. Используя одну операцию деления нацело,
	//вывести первую цифру данного числа (сотни).
	int a;
	cin >> a;
	cout << a/100 << endl;
	return 0;
}
