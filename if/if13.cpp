#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три числа. Найти среднее из них (то есть число, расположенное ме-
	//жду наименьшим и наибольшим).
	int a,b,c;
	cin >> a >> b >> c;
	if (a<=b&&a<=c){
	  cout << (b<=c?b:c);
	} else if (b<=a&&b<=c){
	  cout << (a<=c?a:c);
	} else if (c<=a&&c<=b){
	  cout << (a<=b?a:b);
	}
	return 0;
}
