#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три точки A , B , C на числовой оси. Точка C расположена между
	//точками A и B . Найти произведение длин отрезков AC и BC .
	double a,b,c;
	cin >> a >> b >> c;
	cout << (c-a)*(b-c) << endl;
	return 0;
}
