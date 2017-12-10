#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Элементы окружности пронумерованы следующим образом: 1 — ра-
        //диус R , 2 — диаметр D = 2· R , 3 — длина L = 2· π · R , 4 — площадь круга
        //S = π · R 2 . Дан номер одного из этих элементов и его значение. Вывести зна-
        //чения остальных элементов данной окружности (в том же порядке). В ка-
        //честве значения π использовать 3.14.
        int a;
        double v;
        const double Pi=3.14159265359;
        cin >> a >> v;
        switch(a){
          case 1:
          cout << 2*v << endl << 2*Pi*v << endl << Pi*v*v;
          break;
          case 2:
          cout << v/2 << endl << Pi*v << endl << Pi*v*v/4;
          break;
          case 3:
          cout << v/2*Pi << endl << v*Pi << endl << Pi*(v*v/(4*Pi*Pi));
          break;
          case 4:
          cout << sqrt(v/Pi) << endl << 2*Pi*sqrt(v/Pi) << endl << 2*Pi*sqrt(v/Pi);
          break;
        }
	return 0;
}
