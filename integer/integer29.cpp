#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны целые положительные числа A , B , C . На прямоугольнике раз-
	//мера A × B размещено максимально возможное количество квадратов со
	//стороной C (без наложений). Найти количество квадратов, размещенных
	//на прямоугольнике, а также площадь незанятой части прямоугольника.
	int a,b,c;
	cout << (a*b)/c << " free: " << a*b-(a*b)/c;
	return 0;
}
