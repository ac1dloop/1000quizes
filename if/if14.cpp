#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три числа. Вывести вначале наименьшее, а затем наибольшее из дан-
	//ных чисел.
	int a,b,c;
	cin >> a >> b >> c;
	if (a<=b&&a<=c){
	  cout << a << " " << (b>=c?b:c);
	} else if (b<=a&&b<=c){
	  cout << b << " " << (c>=a?c:a);
	} else if (c<=a&&c<=b){
	  cout << c << " " << (b>=a?b:a);
	}
	return 0;
}
