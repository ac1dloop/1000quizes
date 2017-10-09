#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано трехзначное число. Вывести число, полученное при переста-
	//новке цифр десятков и единиц исходного числа (например, 123 перейдет
	//в 132).
	int a;
	cin >> a;
	cout << (a/100)*100 + (a%10)*10 + (a/10)%10 << endl;
	return 0;
}
