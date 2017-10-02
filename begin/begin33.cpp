#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Известно, что X кг конфет стоит A рублей. Определить, сколько стоит
	//1 кг и Y кг этих же конфет.
	double x,a,y;
	cin >> x >> a >> y;
	double kg=a/x;
	cout << kg << " " << kg*y << endl;
	return 0;
}
