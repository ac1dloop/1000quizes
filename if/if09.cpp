#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны две переменные вещественного типа: A , B . Перераспределить значе-
	//ния данных переменных так, чтобы в A оказалось меньшее из значений,
	//а в B — большее. Вывести новые значения переменных A и B .
	double a,b;
	cin >> a >> b;
	if (a<b){
	  
	} else {
	  int t=a;
	  a=b;
	  b=t;
	}
	cout << a << " " << b;
	return 0;
}
