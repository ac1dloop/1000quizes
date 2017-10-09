#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано двузначное число. Найти сумму и произведение его цифр.
	int a;
	cin >> a;
	cout << (a/10)+(a%10) << " & " << (a/10)*(a%10) << endl;
	return 0;
}
