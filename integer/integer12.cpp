#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано трехзначное число. Вывести число, полученное при прочтении
	//исходного числа справа налево.
	int a;
	cin >> a;
	cout << a%10 << (a/10)%10 << a/100 << endl;
	return 0;
}
