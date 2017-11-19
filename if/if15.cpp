#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три числа. Найти сумму двух наибольших из них.
	int a,b,c;
	cin >> a >> b >> c;
	if (a>=b&&a>=c){
	  cout << a+(b>=c?b:c);
	} else if (b>=c&&b>=a){
	  cout << b+(a>=c?a:c);
	} else if (c>=a&&c>=b){
	  cout << c+(a>=b?a:b);
	}
	return 0;
}
