#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны переменные A, B, C. Изменить их значения, переместив содер-
	//жимое A в B, B — в C, C — в A, и вывести новые значения переменных A,
	//B, C.
	double a,b,c,t;
	cin >> a >> b >> c;
	t=b;
	b=a;
	a=c;
	c=t;
	cout << a << " " << b << " " << c << endl;
	return 0;
}
