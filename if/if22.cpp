#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны координаты точки, не лежащей на координатных осях OX и OY .
	//Определить номер координатной четверти, в которой находится данная
	//точка.
	int x,y;
	cin >> x >> y;
	if (x>=0&&y>=0){
	  cout << 1;
	} else if (x>=0&&y<=0){
	  cout << 4;
	} else if (x<=0&&y>=0){
	  cout << 2;
	} else {
	  cout << 3;
	}
	return 0;
}
