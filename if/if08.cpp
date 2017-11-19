#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны два числа. Вывести вначале большее, а затем меньшее из них.
	int a,b;
	cin >> a >> b;
	cout << (a>b?a:b) << " " << (a<b?a:b);
	return 0;
}
