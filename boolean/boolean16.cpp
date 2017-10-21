#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано целое положительное число. Проверить истинность высказы-
	//вания: «Данное число является четным двузначным».
	int a;
	cin >> a;
	cout << ((a%2==0)&&(a%100==a));
	return 0;
}
