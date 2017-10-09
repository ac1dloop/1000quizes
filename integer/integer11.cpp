#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано трехзначное число. Найти сумму и произведение его цифр.
	int a;
	cin >> a;
	cout << a%10+(a/10)%10+a/100 << " & " << a%10*((a/10)%10)*(a/100) << endl;
	return 0;
}
