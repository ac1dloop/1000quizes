#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны три целых числа: A , B , C . Проверить истинность высказыва-
	//ния: «Ровно два из чисел A , B , C являются положительными».
	int a,b,c;
	cin >> a >> b >> c;
	cout << (((a>=0)&&(b>=0)&&(c<0))||((a>=0)&&(b<0)&&(c>=0))||((a<0)&&(b>=0)&&(c>=0)));
	return 0;
}
