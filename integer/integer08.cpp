#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано двузначное число. Вывести число, полученное при перестанов-
	//ке цифр исходного числа.
	int a;
	cin >> a;
	cout << (a%10)*10+(a/10) << endl;
	return 0;
}
