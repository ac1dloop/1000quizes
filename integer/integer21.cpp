#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//С начала суток прошло N секунд ( N — целое ). Найти количество се-
	//кунд, прошедших с начала последней минуты
	int n;
	cin >> n;
	cout << n%60 << endl;
	return 0;
}
