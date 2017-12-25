#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дан набор ненулевых целых чисел; признак его завершения — чис-
        //ло 0. Вывести количество чисел в наборе.
        int a,k=0;
        cin >> a;
        for (;a!=0;k++){
          cin >> a;
        }
        cout << k;
	return 0;
}
