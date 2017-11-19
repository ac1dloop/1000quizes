#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны четыре целых числа, одно из которых отлично от трех других, рав-
	//ных между собой. Определить порядковый номер числа, отличного от ос-
	//тальных.
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	if (a==b==c){
	  cout << 4;
	} else if (b==c==d){
	  cout << 1;
	} else if (a==b==d){
	  cout << 3;
	} else {
	  cout << 2;
	}
	return 0;
}
