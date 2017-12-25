#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число ε (> 0). Последовательность вещественных
        //чисел A K определяется следующим образом:
        //A 1 = 2,
        //A K = 2 + 1/ A K–1 , K = 2, 3, ... .
        //Найти первый из номеров K , для которых выполняется условие
        //| A K – A K–1 | < ε ,
        //и вывести этот номер, а также числа A K–1 и A K .
        double e;
        cin >> e;
        double a1=2,a2=2+1/a1;
        int i=2;
        while (!(abs(a2-a1)<e)){
          a1=a2;
          a2=2+1/a1;
          i++;
        }
        cout << i << " " << a2 << " " << a1;
	return 0;
}
