#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны целочисленные координаты точки на плоскости. Если точка совпа-
	//дает с началом координат, то вывести 0. Если точка не совпадает с началом
	//координат, но лежит на оси OX или OY , то вывести соответственно 1 или 2.
	//Если точка не лежит на координатных осях, то вывести 3.
	int x,y;
	cin >> x >> y;
	if (x==0&&y==0){
	  cout << 0;
	} else if (x==0&&y!=0){
	  cout << 1;
	} else if (y==0&&x!=0){
	  cout << 2;
	} else if (x!=0&&y!=0){
	  cout << 3;
	}
	return 0;
}
