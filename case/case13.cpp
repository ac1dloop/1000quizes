#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Элементы равнобедренного прямоугольного треугольника пронумеро-
        //ваны следующим образом: 1 — катет a , 2 — гипотенуза c = a 2 , 3 — вы-
        //сота h , опущенная на гипотенузу ( h = c /2 ), 4 — площадь S = c · h /2. Дан но-
        //мер одного из этих элементов и его значение. Вывести значения остальных
        //элементов данного треугольника (в том же порядке)
        int a;
        double v;
        cin >> a >> v;
        switch(a){
          case 1:
          cout << v*sqrt(2) << endl << v*sqrt(2)/2 << endl << v*sqrt(2)*v*sqrt(2)/4;
          break;
          case 2:
          cout << v/sqrt(2) << endl << v/2 << endl << v*v/4;
          break;
          case 3:
          cout << 2*v/sqrt(2) << endl << 2*v << endl << v*v;
          break;
          case 4:
          cout << sqrt(4*v)/sqrt(2) << endl << sqrt(4*v) << endl << sqrt(4*v)/2;
        }
	return 0;
}
