#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Последовательность вещественных чисел A K
        //определяется следующим образом:
        //A 0 = 1,
        //A K = ( A K–1 + 1 )/ K , K = 1, 2, ... .
        //Вывести элементы A 1 , A 2 , ..., A N .
        int n;
        cin >> n;
        double a,b;
        a=1;
        for (int i=1;i<=n;i++){
          b=(a+1)/i;
          cout << b << endl;
          a=b;
        }
	return 0;
}
