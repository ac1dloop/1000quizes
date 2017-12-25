#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 1), являющееся числом Фибоначчи: N = F K (оп-
        //ределение чисел Фибоначчи дано в задании While24). Найти целое число K
        //— порядковый номер числа Фибоначчи N .
        int n;
        cin >> n;
        int k=1;
        int a=1;
        int b=1;
        double c=0;
        while (c!=n){
          c=a+b;
          a=b;
          b=c;
          k++;
        }
        cout << k;
	return 0;
}
