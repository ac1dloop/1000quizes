#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны два целых числа: A , B . Проверить истинность высказывания:
	//«Каждое из чисел A и B нечетное».
	int a,b;
	cin >> a >> b;
	cout << ((a%2!=0)&&(b%2!=0));
	return 0;
}
