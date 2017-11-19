#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три целых числа. Найти количество положительных и количество от-
	//рицательных чисел в исходном наборе.
	int a,b,c,r=0,d=0;
	cin >> a >> b >> c;
	if (a>=0)
	  r++;
	else d++;
	if (b>=0)
	  r++;
	else d++;
	if (c>=0)
	  r++;
	else d++;
	cout << r << " " << d;
	return 0;
}
