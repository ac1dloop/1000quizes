#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Последовательность вещественных чисел A K
        //определяется следующим образом:
        //A 0 = 2,
        //A K = 2 + 1/ A K–1 , K = 1, 2, ... .
        //Вывести элементы A 1 , A 2 , ..., A N .
        int n;
        cin >> n;
        double a,b;
        a=2;
        for (int i=0;i<n;i++){
          b=2+1/a;
          cout << b << endl;
          a=b;
        } 
	return 0;
}
