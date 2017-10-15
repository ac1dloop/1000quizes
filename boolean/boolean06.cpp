#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три целых числа: A , B , C . Проверить истинность высказыва-
	//ния: «Справедливо двойное неравенство A < B < C »
	int a,b,c;
	cin >> a >> b >> c;
	cout << ((a<b)&&(b<c));
	return 0;
}
