#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три числа. Найти наименьшее из них.
	int a,b,c;
	cin >> a >> b >> c;
	cout << ((a<b?a:b)<c?(a<b?a:b):c);
	return 0;
}
