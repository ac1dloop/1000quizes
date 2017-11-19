#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Для данного вещественного x найти значение следующей функции f , при-
	//нимающей вещественные значения:
	//2·sin( x  ), если x > 0,
	//f ( x  ) =
	//6 – x , если x ≤ 0.
	double x;
	cin >> x;
	if (x>0){
	  cout << 2*sin(x);
	} else {
	  cout << 6-x;
	}
	return 0;
}
