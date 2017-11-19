#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано целое число. Если оно является положительным, то прибавить к не-
	//му 1; если отрицательным, то вычесть из него 2; если нулевым, то заме-
	//нить его на 10. Вывести полученное число.
	int a;
	cin >> a;
	if (a>0)
	  a++;
	else if (a<0)
		a-=2;
	else a=10;
	cout << a;
	return 0;
}
