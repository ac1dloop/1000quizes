#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Единицы массы пронумерованы следующим образом: 1 — килограмм,
	//2 — миллиграмм, 3 — грамм, 4 — тонна, 5 — центнер. Дан номер единицы
	//массы (целое число в диапазоне 1–5) и масса тела в этих единицах (веще-
	//ственное число). Найти массу тела в килограммах.
	int a,b;
	cin >> a >> b;
	switch(a){
		case 1:
		cout << b;
		break;
		case 2:
		cout << b/10000;
		break;
		case 3:
		cout << b/1000;
		break;
		case 4:
		cout << b/1000;
		break;
		case 5:
		cout << b/100;
		break;
	}
	return 0;
}
