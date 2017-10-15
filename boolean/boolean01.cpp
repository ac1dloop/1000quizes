#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано целое число A . Проверить истинность высказывания: «Число
	//A является положительным».
	int a;
	cin >> a;
	cout << bool(a>=0);
	return 0;
}
