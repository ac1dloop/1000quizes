#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int fac(int x){
  return (x==1)||(x==0)?1:fac(x-1)*x;
}

int main()
{
        //Дано вещественное число X и целое число N (> 0). Найти значение вы-
        //ражения
        //X – X 3 /(3!) + X 5 /(5!) – ... + (–1) N · X 2·N+1 /((2· N +1)!)
        //( N ! = 1·2·...· N  ). Полученное число является приближенным значением
        //функции sin в точке X .
        double x;
        int n;
        cin >> x >> n;
        double r=x;
        double s=0;
        for (int i=1;i<=n;i+=2){
          s+=r/fac(i);
          r*=(-1)*x*x;
        }
        cout << "s= " << s;
	return 0;
}
