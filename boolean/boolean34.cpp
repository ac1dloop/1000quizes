#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны координаты поля шахматной доски x , y (целые числа, лежа-
	//щие в диапазоне 1–8). Учитывая, что левое нижнее поле доски (1, 1) явля-
	//ется черным, проверить истинность высказывания: «Данное поле является
	//белым».
	int x,y;
	cin >> x >> y;
	cout << !(x%2==0?y%2==0:y%2==0);
	return 0;
}
