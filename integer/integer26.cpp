#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дни недели пронумерованы следующим образом: 1 — понедельник,
	//2 — вторник, ..., 6 — суббота, 7 — воскресенье. Дано целое число K , ле-
	//жащее в диапазоне 1–365. Определить номер дня недели для K -го дня года,
	//если известно, что в этом году 1 января было вторником.
	int k;
	cin >> k;
	cout << (k+1)%7+1;
	return 0;
}
