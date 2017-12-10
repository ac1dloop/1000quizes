#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Единицы длины пронумерованы следующим образом: 1 — дециметр,
	//2 — километр, 3 — метр, 4 — миллиметр, 5 — сантиметр. Дан номер еди-
	//ницы длины (целое число в диапазоне 1–5) и длина отрезка в этих едини-
	//цах (вещественное число). Найти длину отрезка в метрах.
	int a,b;
	cin >> a >> b;
	switch(a){
		case 1:
		cout << b/10;
		break;
		case 2:
		cout << b*1000;
		break;
		case 3:
		cout << b;
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
