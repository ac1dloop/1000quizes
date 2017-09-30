#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны два круга с общим центром и радиусами R 1 и R 2 ( R 1 > R 2  ). Найти
	//площади этих кругов S 1 и S 2 , а также площадь S 3 кольца, внешний радиус
	//которого равен R 1 , а внутренний радиус равен R 2 :
	const double Pi=3.14159265359;
	double R1,R2;
	//S3=S1-S2
	cin >> R1 >> R2;
	cout << Pi*R1*R1-Pi*R2*R2 << endl;
	return 0;
}
