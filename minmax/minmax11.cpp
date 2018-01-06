#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел. Найти номер по-
        //следнего экстремального (то есть минимального или максимального) эле-
        //мента из данного набора.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        for (int i=n-1;i!=0;i++){
          if (*min_element(arr,arr+n)==arr[i]||*max_element(arr,arr+n)==arr[i]){
            cout << i;
            break;
          }
        }
	return 0;
}
