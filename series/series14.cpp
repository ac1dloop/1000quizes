#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число K и набор ненулевых целых чисел; признак его за-
        //вершения — число 0. Вывести количество чисел в наборе, меньших K .
        int k;
        cin >> k;
        int a,j=-1;
        cin >> a;
        if (a<k)      
          j++;
        for (;a!=0;){
          cin >> a;
          if (a<k)
            j++;
        }
        cout << j;
	return 0;
}
