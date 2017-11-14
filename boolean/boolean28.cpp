#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны числа x , y . Проверить истинность высказывания: «Точка с ко-
	//ординатами ( x , y  ) лежит в первой или третьей координатной четверти».
	int x,y;
	cin >> x >> y;
	cout << (x*y>=0);
	return 0;
}
