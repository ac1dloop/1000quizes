#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три переменные вещественного типа: A , B , C . Если их значения упо-
	//рядочены по возрастанию, то удвоить их; в противном случае заменить
	//значение каждой переменной на противоположное. Вывести новые значе-
	//ния переменных A , B , C .
	double a,b,c;
	cin >> a >> b >> c;
	if (c>=b&&b>=a){
	  cout << 2*a << " " << 2*b << " " << 2*c;
	} else {
	  cout << -1*a << " " << -1*b << " " << -1*c;
	}
	return 0;
}
