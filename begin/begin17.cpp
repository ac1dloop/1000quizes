#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три точки A , B , C на числовой оси. Найти длины отрезков AC
	//и BC и их сумму.
	double a,b,c;
	cin >> a >> b >> c;
	cout << c-a << " " << c-b << " " << (c-a)+(c-b) << endl;
	return 0;
}
