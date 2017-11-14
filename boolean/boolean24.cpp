#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны числа A , B , C (число A не равно 0). Рассмотрев дискриминант
	//D = B 2 – 4· A · C , проверить истинность высказывания: «Квадратное уравне-
	//ние A · x 2 + B · x + C = 0 имеет вещественные корни».
	int a,b,c;
	cin >> a >> b >> c;
	cout << (b*b-4*a*c>=0);
	return 0;
}
