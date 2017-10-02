#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано число A. Вычислить A^15 , используя две вспомогательные пере-
	//менные и пять операций умножения. Для этого последовательно находить
	//A^2 , A^3 , A^5 , A^10 , A^15 . Вывести все найденные степени числа A.
	double a,t1,t2;
	cin >> a;
	t1=a;
	a*=a;
	t2=a;
	cout << a << endl;
	a*=t1;
	cout << a << endl;
	a*=t2;
	cout << a << endl;
	t1=a;
	a*=t1;
	cout << a << endl;
	a*=t1;
	cout << a << endl;
	
	return 0;
}
