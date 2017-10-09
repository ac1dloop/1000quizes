#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано трехзначное число. Вывести число, полученное при переста-
	//новке цифр сотен и десятков исходного числа (например, 123 перейдет
	//в 213).
	int a;
	cin >> a;
	cout << ((a/10)%10)*100 + (a/100)*10 + a%10 << endl;
	return 0;
}
