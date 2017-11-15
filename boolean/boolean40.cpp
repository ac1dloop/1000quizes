#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны координаты двух различных полей шахматной доски x 1 , y 1 ,
	//x 2 , y 2 (целые числа, лежащие в диапазоне 1–8). Проверить истинность вы-
	//сказывания: «Конь за один ход может перейти с одного поля на другое».
	int x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << ((abs(x1-x2)==1?abs(y1-y2)==2:0)||(abs(y1-y2)==1?abs(x1-x2)==2:0));
	return 0;
}
