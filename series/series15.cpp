#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число K и набор ненулевых целых чисел; признак его за-
        //вершения — число 0. Вывести номер первого числа в наборе, большего K .
        //Если таких чисел нет, то вывести 0.
        int k;
        cin >> k;
        int a,s=0;
        cin >> a;
        if (a>k){
          cout << a;
          return 0;
        }
        for (;a!=0;){
          cin >> a;
          if (a>k){
            s=a;
            break;
          }
        }
        cout << s;
	return 0;
}
