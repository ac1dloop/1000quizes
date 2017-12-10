#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void p(string s){
	cout << s << endl;
}
int main()
{
	//Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 —
	//февраль и т. д.). Вывести название соответствующего времени года («зи-
	//ма», «весна», «лето», «осень»).
	int a;
	cin >> a;
	string wi="winter";
	string su="summer";
	string sp="spring";
	string au="autumn";
	switch(a){
		case 12:
		p(wi);
		break;
		case 1:
		p(wi);
		break;
		case 2:
		p(wi);
		break;
		case 3:
		p(sp);
		break;
		case 4:
		p(sp);
		break;
		case 5:
		p(sp);
		break;
		case 6:
		p(su);
		break;
		case 7:
		p(su);
		break;
		case 8:
		p(su);
		break;
		default:
		p(au);
	}
	return 0;
}
