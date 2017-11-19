#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три целых числа, одно из которых отлично от двух других, равных
	//между собой. Определить порядковый номер числа, отличного от осталь-
	//ных.
	int a,b,c;
	cin >> a >> b >> c;
	if (a==b){
	  cout << 3;
	} else if (b==c){
	  cout << 1;
	} else {
	  cout << 2;
	}
	return 0;
}
