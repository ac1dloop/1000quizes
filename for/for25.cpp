#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число X (| X | < 1) и целое число N (> 0). Найти значе-
        //ние выражения
        //X – X 2 /2 + X 3 /3 – ... + (–1) N–1 · X N / N .
        //Полученное число является приближенным значением функции ln в точке
        //1 + X .
        double x;
        int n;
        cin >> x >> n;
        double r=x,s=x;
        for (int i=2;i<=n;i+=2){
          r*=x/i*(-1);
          s+=r;          
        }
        cout << "s=" << s;
	return 0;
}
