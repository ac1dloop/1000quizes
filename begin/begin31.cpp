#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано значение температуры T в градусах Фаренгейта. Определить
	//значение этой же температуры в градусах Цельсия. Температура по Цель-
	//сию T C и температура по Фаренгейту T F связаны следующим соотношени-
	//ем:
	//T C = (T F – 32)·5/9.
	double F;
	cin >> F;
	cout << (F-32)*5/9 << " C" << endl;
	return 0;
}
