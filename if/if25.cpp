#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Для данного целого x найти значение следующей функции f , принимаю-
	//щей значения целого типа:
	//2· x , если x < –2 или x > 2,
	//f ( x  ) =
	//–3· x , в противном случае.
	double x;
	cin >> x;
	if (x<-2||x>2){
	  cout << 2*x;
	} else {
	  cout << -3*x;
	}
	return 0;
}
