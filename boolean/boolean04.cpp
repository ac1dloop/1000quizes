#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны два целых числа: A , B . Проверить истинность высказывания:
	//«Справедливы неравенства A > 2 и B ≤ 3».
	int a,b;
	cin >> a >> b;
	cout << ((a>2)&&(b<=3));
	return 0;
}
