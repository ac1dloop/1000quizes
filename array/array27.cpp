#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив ненулевых целых чисел размера N. Проверить, чередуются
        //ли в нем положительные и отрицательные числа. Если чередуются, то вы-
        //вести 0, если нет, то вывести порядковый номер первого элемента, нару-
        //шающего закономерность.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        for (int i=1;i<n;i++)
          if ((arr[i-1]<0&&arr[i]<0)||(arr[i-1]>0&&arr[i]>0)){
            cout << arr[i-1];
            return 0;
          }
        cout << 0;
	return 0;
}
