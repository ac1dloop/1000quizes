#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Арифметические действия над числами пронумерованы следующим
	//образом: 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.
	//Дан номер действия N (целое число в диапазоне 1–4) и вещественные чис-
	//ла A и B ( В не равно 0 ). Выполнить над числами указанное действие и вы-
	//вести результат.
	int a,b,n;
	cin >> n >> a >> b;
	switch(n){
		case 1:
		cout << a+b;
		break;
		case 2:
		cout << a-b;
		break;
		case 3:
		cout << a*b;
		break;
		case 4:
		cout << a/b;
		break;
	}
	return 0;
}
