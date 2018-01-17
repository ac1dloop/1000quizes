#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан целочисленный массив размера N. Проверить, чередуются ли в
        //нем четные и нечетные числа. Если чередуются, то вывести 0, если нет, то
        //вывести порядковый номер первого элемента, нарушающего закономер-
        //ность.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        for (int i=1;i<n;i++){
          if ((arr[i]%2==0&&arr[i-1]%2==0)||(arr[i]%2!=0&&arr[i-1]%2!=0)){
            cout << arr[i];
            return 0;
          }
        }
        cout << 0;
	return 0;
}
