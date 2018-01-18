#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив размера N. Найти номер его первого локального миниму-
        //ма (локальный минимум — это элемент, который меньше любого из своих
        //соседей).
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];

        for (int i=2;i<n;i++)
          if (arr[i-1]<arr[i-2]&&arr[i-1]<arr[i]){
            cout << i;
            return 0;
          }
	return 0;
}
