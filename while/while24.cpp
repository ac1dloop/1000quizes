#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 1). Последовательность чисел Фибоначчи F K
        //определяется следующим образом:
        //F 1 = 1,
        //F 2 = 1,
        //F K = F K–2 + F K–1 , K = 3, 4, ... .
        //Проверить, является ли число N числом Фибоначчи. Если является, то вы-
        //вести True, если нет — вывести False.
        int n;
        cin >> n;
        bool f=false;
        int a=1;
        int b=1;
        double c=0;
        while (n>=c){
          if (n==c){
            cout << "TRUE";
            f=true;
            break;
          }
          c=a+b;
          a=b;
          b=c;
        }
        if (!f)
          cout << "FALSE";
	return 0;
}
