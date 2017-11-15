#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны координаты двух различных полей шахматной доски x 1 , y 1 ,
	//x 2 , y 2 (целые числа, лежащие в диапазоне 1–8). Проверить истинность вы-
	//сказывания: «Слон за один ход может перейти с одного поля на другое».
	int x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << (abs(x2-x1)==abs(y2-y1));
	return 0;
}
