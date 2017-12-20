#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1.2,
        //1.4, ..., 2 кг конфет.
        double a;
        cin >> a;
        for (int i=2;i<=10;i+=2){
          cout << a*((double)i/10 + 1) << endl;
        }
	return 0;
}
