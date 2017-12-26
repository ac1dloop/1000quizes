#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N (> 1) и набор из N вещественных чисел. Если
        //данный набор образует убывающую последовательность, то вывести 0;
        //в противном случае вывести номер первого числа, нарушающего
        //закономерность.
        int n;
        cin >> n;
        double a,b,c=0;
        cin >> a >> b;
        if (b>a){
          cout << b;
          return 0;
        }
        a=b;
        for (int i=0;i<n-2;i++){
          cin >> b;
          if (b>a){
            c=b;
            break;
          }
          a=b;   
        }
        cout << c;
	return 0;
}
