#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано трехзначное число. Вывести вначале его последнюю цифру
	//(единицы), а затем — его среднюю цифру (десятки).
	int a;
	cin >> a;
	cout << a%10 << " & " << (a/10)%10 << endl;
	return 0;
}
