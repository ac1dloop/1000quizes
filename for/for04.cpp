#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1,
        //2, ..., 10 кг конфет.
        double a;
        cin >> a;
        for (int i=1;i<=10;i++){
          cout << a*i << endl;
        }
	return 0;
}
