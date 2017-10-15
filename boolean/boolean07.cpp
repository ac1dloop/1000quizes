#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три целых числа: A , B , C . Проверить истинность высказыва-
	//ния: «Число B находится между числами A и C ».
	int a,b,c;
	cin >> a >> b >> c;
	cout << (((b>a)&&b<c)||((b<a)&&(b>c)));
	return 0;
}
