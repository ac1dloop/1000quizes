#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано целое число K . Вывести строку-описание оценки, соответствую-
	//щей числу K (1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетво-
	//рительно», 4 — «хорошо», 5 — «отлично»). Если K не лежит в диапазоне
	//1–5, то вывести строку «ошибка».
	int k;
	cin >> k;
	switch(k){
		case 1:
		cout << "very bad";
		break;
		case 2:
		cout << "bad";
		break;
		case 3:
		cout << "udovl";
		break;
		case 4:
		cout << "ok";
		break;
		case 5:
		cout << "good";
		default:
		cout << "error";
	}
	return 0;
}
