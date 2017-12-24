#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 1). Последовательность чисел Фибоначчи F K
        //(целого типа) определяется следующим образом:27
        //F 1 = 1,
        //F 2 = 1,
        //F K = F K–2 + F K–1 , K = 3, 4, ... .
        //Вывести элементы F 1 , F 2 , ..., F N .
        int n;
        cin >> n;
        int a=1,b=1,c;
        cout << a << endl << b << endl;
        for (int i=3;i<=n;i++){
          c=a+b;
          cout << c << endl;
          a=b;
          b=c;
        }
	return 0;
}
