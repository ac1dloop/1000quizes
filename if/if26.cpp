#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Для данного вещественного x найти значение следующей функции f , при-
	//нимающей вещественные значения:
	//– x , если x ≤ 0,
	//f ( x  ) =
	//x 2 , если 0 < x < 2,
	//4, если x ≥ 2.
	double x;
	cin >> x;
	if (x<=0){
	  cout << -1*x;
	} else if (x>0&&x<2){
	  cout << x*x;
	} else if (x>=2){
	  cout << 4;
	}
	return 0;
}
