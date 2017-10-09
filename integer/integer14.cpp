#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано трехзначное число. В нем зачеркнули первую справа цифру и
	//приписали ее слева. Вывести полученное число.
	int a;
	cin >> a;
	int b=(a%10)*100;
	cout << b+(a/100)*10 + (a/10)%10 << endl;
	return 0;
}
