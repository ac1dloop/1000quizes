#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 —
	//февраль и т. д.). Определить количество дней в этом месяце для невисо-
	//косного года.
	int a;
	cin >> a;
	switch(a){
		case 1:
		cout << 31;
		break;
		case 2:
		cout << 28;
		break;
		case 3:
		cout << 31;
		break;
		case 4:
		cout << 30;
		break;
		case 5:
		cout << 31;
		break;
		case 6:
		cout << 30;
		break;
		case 7:
		cout << 31;
		break;
		case 8:
		cout << 31;
		break;
		case 9:
		cout << 30;
		break;
		case 10:
		cout << 31;
		break;
		case 11:
		cout << 30;
		break;
		case 12:
		cout << 31;
		break;
	}
	return 0;
}
