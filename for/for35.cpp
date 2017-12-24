#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 2). Последовательность целых чисел A K опреде-
        //ляется следующим образом:
        //A 1 = 1,
        //A 2 = 2,
        //A 3 = 3,
        //A K = A K–1 + A K–2 – 2· A K–3 , K = 4, 5, ... .
        //Вывести элементы A 1 , A 2 , ..., A N .
        int n;
        cin >> n;
        double a=1,b=2,c=3,d;
        for (int i=4;i<=n+4;i++){
          d=c+b-2*a;
          cout << d << endl;
          a=b;
          b=c;
          c=d;
        }
	return 0;
}
