#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число X (| X | < 1) и целое число N (> 0). Найти значе-
        //ние выражения
        //X – X 3 /3 + X 5 /5 – ... + (–1) N · X 2·N+1 /(2· N +1).
        //Полученное число является приближенным значением функции arctg в
        //точке X .
        int n;
        double x;
        cin >> x >> n;
        double r=x,s=0;
        for (int i=1;i<=2*n+1;i+=2){
          s+=r/i;
          r*=x*x*(-1);
        }
        cout << "s= " << s;
	return 0;
}
