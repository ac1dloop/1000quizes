#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано целое число, большее 999. Используя одну операцию деления
	//нацело и одну операцию взятия остатка от деления, найти цифру, соответ-
	//ствующую разряду тысяч в записи этого числа.
	int a;
	cin >> a;
	cout << a/1000 << endl;
	return 0;
}
