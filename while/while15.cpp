#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Начальный вклад в банке равен 1000 руб. Через каждый месяц размер
        //вклада увеличивается на P процентов от имеющейся суммы ( P — вещест-
        //венное число, 0 < P < 25 ). По данному P определить, через сколько меся-
        //цев размер вклада превысит 1100 руб., и вывести найденное количество
        //месяцев K (целое число) и итоговый размер вклада S (вещественное число).
        double s=1000;
        double p;
        cin >> p;
        int k=1;
        while (s<=1100){
          s+=(s/100)*p;
          k++;
        }
        cout << k << " " << s;
	return 0;
}