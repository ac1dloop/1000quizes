#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны числа x , y . Проверить истинность высказывания: «Точка с ко-
	//ординатами ( x , y  ) лежит в четвертой координатной четверти».
	int x,y;
	cin >> x >> y;
	cout << ((x>=0)&&(y<=0));
	return 0;
}
