#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дан набор ненулевых целых чисел; признак его завершения — чис-
        //ло 0. Вывести сумму всех положительных четных чисел из данного набора.
        //Если требуемые числа в наборе отсутствуют, то вывести 0.
        int a,s=0;
        cin >> a;
        for (;a!=0;){
          cin >> a;
          if (a>0&&a%2==0)
            s+=a;
        }
        cout << s;
	return 0;
}
