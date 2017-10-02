#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Известно, что X кг шоколадных конфет стоит A рублей, а Y кг ирисок
	//стоит B рублей. Определить, сколько стоит 1 кг шоколадных конфет, 1 кг
	//ирисок, а также во сколько раз шоколадные конфеты дороже ирисок.
	double x,a,y,b;
	cin >> x >> a >> y >> b;
	cout << a/x << " " << b/y << " " << (a/x)/(b/y) << endl;
	return 0;
}
