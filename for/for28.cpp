#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число X (| X | < 1) и целое число N (> 0). Найти значе-
        //ние выражения
        //1 + X /2 – 1· X 2 /(2·4) + 1·3· X 3 /(2·4·6) – ... +
        //+ (–1) N–1 ·1·3·...·(2· N –3)· X N /(2·4·...·(2· N )).
        //Полученное число является приближенным значением функции 1 + X .
        double x;
        int n;
        cin >> x >> n;
        double r=x, s=1;
        s+=r/2;
        r*=(-1)*x;
        s+=r/(2*4);
        for (int i=3;i<=n;i++){
          r*=(-1)*x;
          s+=((2*n-3)*r)/(2*4*(2*n));
        }
        cout << "s= " << s;
	return 0;
}
