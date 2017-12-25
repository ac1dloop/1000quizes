#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 1), являющееся числом Фибоначчи: N = F K (оп-
        //ределение чисел Фибоначчи дано в задании While24). Найти целые числа
        //F K–1 и F K+1 — предыдущее и последующее числа Фибоначчи.
        int n;
        cin >> n;
        int a=1;
        int b=1;
        double c=0;
        double r;
        while (c!=n){
          if (c!=n)
            r=c;
          c=a+b;
          a=b;
          b=c;
        }
        c=a+b;
        cout << r << " " << c;
	return 0;
}
