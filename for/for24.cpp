#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int fac(int x){
  return (x==0)||(x==1)?1:fac(x-1)*x;
}
int main()
{
        //Дано вещественное число X и целое число N (> 0). Найти значение вы-
        //ражения
        //1 – X 2 /(2!) + X 4 /(4!) – ... + (–1) N · X 2·N /((2· N )!)
        //( N ! = 1·2·...· N  ). Полученное число является приближенным значением
        //функции cos в точке X .
        double x;
        int n;
        cin >> x >> n;
        double r=x*x,s=1;
        for (int i=2;i<=n;i+=2){
          s+=r/fac(i);
          r*=x*x*(-1);
        }
        cout << "s= " << s;
	return 0;
}
