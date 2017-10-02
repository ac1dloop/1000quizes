#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Решить линейное уравнение A·x + B = 0, заданное своими коэффици-
	//ентами A и B (коэффициент A не равен 0).
	double a,b;
	cin >> a >> b;
	cout << (-1)*b/a << endl;
	return 0;
}
