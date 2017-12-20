#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1,
        //0.2, ..., 1 кг конфет.
        double a;
        cin >> a;
        for (int i=1;i<=10;i++){
          cout << (double) a*((double)i/10) << endl;
        }
	return 0;
}
