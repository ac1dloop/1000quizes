#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Найти значение функции y = 4·(x–3)^6 – 7·(x–3)^3 + 2 при данном значе-
	//нии x
	double x;
	cin >> x;
	cout << "res: " << 4*pow(x-3,6)-7*pow(x-3, 3)+2 << endl;
	return 0;
}
