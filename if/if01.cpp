#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано целое число. Если оно является положительным, то прибавить к не-
	//му 1; в противном случае не изменять его. Вывести полученное число.
	int a;
	cin >> a;
	if (a>=0)
	  a++;
	cout << a;
	return 0;
}
