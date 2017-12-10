#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано целое число в диапазоне 1–7. Вывести строку — название дня не-
	//дели, соответствующее данному числу (1 — «понедельник», 2 — «втор-
	//ник» и т. д.).
	int x;
	cin >> x;
	switch (x){
		case 1:
		cout << "monday";
		break;
		case 2:
		cout << "tuesday";
		break;
		case 3:
		cout << "wednesday";
		break;
		case 4:
		cout << "thursday";
		break;
		case 5:
		cout << "friday";
		break;
		case 6:
		cout << "saturday";
		break;
		case 7:
		cout << "sunday";
		break;
	}
	return 0;
}
