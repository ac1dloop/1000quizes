#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три переменные вещественного типа: A , B , C . Если их значения упо-
	//рядочены по возрастанию или убыванию, то удвоить их; в противном слу-
	//чае заменить значение каждой переменной на противоположное. Вывести
	//новые значения переменных A , B , C .
	int a,b,c;
	cin >> a >> b >> c;
	if ((c>=b&&b>=a)||(c<=b&&b<=a)){
	  cout << 2*a << " " << 2*b << " " << 2*c;
	} else {
	  cout << -1*a << " " << -1*b << " " << -1*c; 
	}
		
	return 0;
}
