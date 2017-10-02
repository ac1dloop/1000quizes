#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано расстояние L в сантиметрах. Используя операцию деления наце-
	//ло, найти количество полных метров в нем (1 метр = 100 см).
	int l;
	cin >> l;
	cout << l/100 << endl;
	return 0;
}

