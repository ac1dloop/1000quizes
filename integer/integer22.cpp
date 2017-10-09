#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//С начала суток прошло N секунд ( N — целое ). Найти количество се-
	//кунд, прошедших с начала последнего часа.
	int n;
	cin >> n;
	cout << n%360 << endl;
	return 0;
}
