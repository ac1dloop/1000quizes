#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три целых числа. Найти количество положительных чисел в исход-
	//ном наборе.
	int a,b,c,r=0;
	cin >> a >> b >> c;
	if (a>=0)
	  r++;
	if (b>=0)
	  r++;
	if (c>=0)
	  r++;
	cout << r;
	return 0;
}
