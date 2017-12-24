#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 1) и две вещественные точки на числовой оси:
        //A , B ( A < B  ). Отрезок [ A , B  ] разбит на N равных отрезков. Вывести H —
        //длину каждого отрезка, а также набор точек
        //A , A + H , A + 2· H , A + 3· H , ..., B ,
        //образующий разбиение отрезка [ A , B  ]
        int n;
        double a,b;
        cin >> n >> a >> b;
        double h=(b-a)/n;
        cout << "h=" << h << endl;
        for (double i=a;i<=b;i+=h){
          cout << i << endl;
        }
	return 0;
}
