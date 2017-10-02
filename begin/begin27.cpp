#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано число A. Вычислить A^8 , используя вспомогательную перемен-
	//ную и три операции умножения. Для этого последовательно находить A^2 ,
	//A^4 , A^8 . Вывести все найденные степени числа A.
	double a;
	cin >> a;
	a*=a;
	cout << a << endl;
	a*=a;
	cout << a << endl;
	a*=a;
	cout << a << endl;
	return 0;
}
