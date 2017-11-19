#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//На числовой оси расположены три точки: A , B , C . Определить, какая из
	//двух последних точек ( B или C  ) расположена ближе к A , и вывести эту точ-
	//ку и ее расстояние от точки A .
	int a,b,c;
	cin >> a >> b >> c;
	if (abs(a-b)<=abs(a-c)){
	  cout << "B";
	} else {
	  cout << "C";
	}
	return 0;
}
