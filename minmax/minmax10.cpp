#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел. Найти номер перво-
        //го экстремального (то есть минимального или максимального) элемента из
        //данного набора.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        for (int i=0;i<n;i++){
          if (*min_element(arr,arr+n)==arr[i]||*max_element(arr,arr+n)==arr[i]){
            cout << i;
            break;
          }
        }
	return 0;
}
