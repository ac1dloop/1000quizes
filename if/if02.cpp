#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано целое число. Если оно является положительным, то прибавить к не-
	//му 1; в противном случае вычесть из него 2. Вывести полученное число.
	int a;
	cin >> a;
	if (a>=0)
	  a++;
	else a-=2;
	cout << a;
	return 0;
}
