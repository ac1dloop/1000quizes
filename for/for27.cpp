#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число X (| X | < 1) и целое число N (> 0). Найти значе-
        //ние выражения
        //X + 1· X 3 /(2·3) + 1·3· X 5 /(2·4·5) + ... +
        //+ 1·3·...·(2· N –1)· X 2·N+1 /(2·4·...·(2· N )·(2· N +1)).
        //Полученное число является приближенным значением функции arcsin в
        //точке X .
        double x;
        int n;
        cin >> x >> n;
        double r=x,s=0;
        s+=x;
        r*=x*x;
        s+=r/(2*3);
        r*=x*x;
        s+=(3*r)/(2*4*5);
        for (int i=3;i<=n;i++){
          r*=x*x;
          r*=x*x;
          s+=((2*i-1)*r)/(16*n*(2*n+1));
        }
        cout << "s= " << s; 
	return 0;
}
