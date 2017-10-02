#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано значение температуры T в градусах Цельсия. Определить значе-
	//ние этой же температуры в градусах Фаренгейта. Температура по Цельсию
	//T C и температура по Фаренгейту T F связаны следующим соотношением:
	//T C = (T F – 32)·5/9.
	double C;
	cin >> C;
	cout << C*9/5-32 << " F" << endl;
	return 0;
}
