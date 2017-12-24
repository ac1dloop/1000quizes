#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double f(double x){
  return 1-sin(x);
}
int main()
{
        //Дано целое число N (> 1) и две вещественные точки на числовой оси:
        //A , B ( A < B  ). Отрезок [ A , B  ] разбит на N равных отрезков. Вывести H —
        //длину каждого отрезка, а также значения функции F ( X  ) = 1 – sin( X  ) в точ-
        //ках, разбивающих отрезок [ A , B  ]:
        //F ( A  ), F ( A + H  ), F ( A + 2· H  ), ..., F ( B  ).
        int n;
        double a,b;
        cin >> n >> a >> b;
        double h=(b-a)/n;
        cout << "h=" << h << endl;
        for (double i=a;i<=b;i+=h){
          cout << f(i) << endl;
        }
	return 0;
}
