#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано трехзначное число. В нем зачеркнули первую слева цифру и
	//приписали ее справа. Вывести полученное число.
	int a;
	cin >> a;
	int b=(a%100)*10;
	cout << b+a/100 << endl;
	return 0;
}
