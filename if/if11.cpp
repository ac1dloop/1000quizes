#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны две переменные целого типа: A и B . Если их значения не равны, то
	//присвоить каждой переменной большее из этих значений, а если равны, то
	//присвоить переменным нулевые значения. Вывести новые значения пере-
	//менных A и B .
	int a,b;
	cin >> a >> b;
	if (a!=b){
	  a=a>b?a:b;
	  b=a;
	} else {
	  a=b=0;
	}
	cout << a << " " << b;
	return 0;
}
