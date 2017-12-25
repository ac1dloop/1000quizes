#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число ε (> 0). Последовательность вещественных
        //чисел A K определяется следующим образом:
        //A 1 = 1,
        //A 2 = 2,
        //A K = ( A K–2 + 2· A K–1  )/3, K = 3, 4, ... .
        //Найти первый из номеров K , для которых выполняется условие
        //| A K – A K–1 | < ε ,
        //и вывести этот номер, а также числа A K–1 и A K .
        double e;
        cin >> e;
        double a=1;
        double b=2;
        double c=(a+2*b)/3;
        int i=3;
        while (!(abs(c-b)<e)){
          a=b;
          b=c;
          c=(a+2*b)/3;
          i++;
        }
        cout << i << " " << b << " " << c;
	return 0;
}
