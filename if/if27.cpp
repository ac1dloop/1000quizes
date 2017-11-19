#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Для данного вещественного x найти значение следующей функции f ,
	//принимающей значения целого типа:
	//0, если x < 0,
	//f ( x  ) =
	//1, если x принадлежит [0, 1), [2, 3), ...,
	//–1, если x принадлежит [1, 2), [3, 4), ... .
	double x;
	cin >> x;
	if (x<0){
	  cout << 0;
	} else if (x>=0&&(x-round(x)!=0)){
	  cout << 1;
	} else if (x>=1&&(x-round(x)!=0)){
	  cout << -1;
	}
	return 0;
}
