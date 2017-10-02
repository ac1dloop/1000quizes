#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Найти значение функции y = 3·x^6 – 6·x^2 – 7 при данном значении x
	double x;
	cin >> x;
	cout << 3*pow(x,6)-6*x*x-7 << endl;
	return 0;
}
