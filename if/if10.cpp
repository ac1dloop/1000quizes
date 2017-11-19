#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны две переменные целого типа: A и B . Если их значения не равны, то
	//присвоить каждой переменной сумму этих значений, а если равны, то при-
	//своить переменным нулевые значения. Вывести новые значения перемен-
	//ных A и B .
	int a,b;
	cin >> a >> b;
	if (a!=b){
	  a=b=a+b;
	} else {
	  a=b=0;
	}
	cout << a << " " << b;
	return 0;
}
