#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Элементы равностороннего треугольника пронумерованы следующим
        //образом: 1 — сторона a , 2 — радиус R 1 вписанной окружности ( R 1 =
        //= a 3 / 6  ), 3 — радиус R 2 описанной окружности ( R 2 = 2· R 1  ), 4 — площадь
        //S = a 2 3 / 4 . Дан номер одного из этих элементов и его значение. Вывести
        //значения остальных элементов данного треугольника (в том же порядке).
        int a;
        double v;
        cin >> a >> v;
        switch(a){
          case 1:
          cout << v*sqrt(3)/6 << endl << v*sqrt(3)/3 << endl << v*v*sqrt(3)/4;
          break;
          case 2:
          cout << v*sqrt(3)/6 << endl << v*sqrt(3)/3 << endl << v*v*12*sqrt(3)/36;
          break;
          case 3:
          cout << v*sqrt(3)/3 << endl << v/2 << endl << v*v*12*sqrt(3)/18;
          break;
          case 4:
          cout << sqrt(4*v/sqrt(3)) << endl << sqrt(4*v/sqrt(3))*sqrt(3)/6 << endl;
          cout << 2*sqrt(4*v/sqrt(3))*sqrt(3)/3;
          break;
        }
	return 0;
}
