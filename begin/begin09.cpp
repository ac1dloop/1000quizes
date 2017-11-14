#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны два неотрицательных числа a и b. Найти их среднее геометриче-
	//ское, то есть квадратный корень из их произведения: sqrt(a*b)
	double a,b;
	cin >> a >> b;
	cout << sqrt(a*b) << endl;
	
	return 0;
}
