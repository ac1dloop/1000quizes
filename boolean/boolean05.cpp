#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны два целых числа: A , B . Проверить истинность высказывания:
	//«Справедливы неравенства A ≥ 0 или B < –2».
	int a,b;
	cin >> a >> b;
	cout << ((a>=0)&&(b<-2));
	return 0;
}
