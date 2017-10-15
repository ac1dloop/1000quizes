#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дан номер некоторого года (целое положительное число). Опреде-
	//лить соответствующий ему номер столетия, учитывая, что, к примеру, на-
	//чалом 20 столетия был 1901 год.
	int i;
	cin >> i;
	cout << i/100;
	return 0;
}
