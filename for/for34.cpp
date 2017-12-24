#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 1). Последовательность вещественных чисел A K
        //определяется следующим образом:
        //A 1 = 1,
        //A 2 = 2,
        //A K = ( A K–2 + 2· A K–1  )/3, K = 3, 4, ... .
        //Вывести элементы A 1 , A 2 , ..., A N .
        int n;
        cin >> n;
        double a=1, b=2, c;
        cout << a << endl << b << endl;
        for (int i=3;i<=n+3;i++){
          c=(a+2*b)/3;
          a=b;
          b=c;
          cout << c << endl;
        }
	return 0;
}
