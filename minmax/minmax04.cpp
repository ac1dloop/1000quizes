#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int main()
{
        //Дано целое число N и набор из N чисел. Найти номер минимального
        //элемента из данного набора.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        int r=INT_MAX;
        int d=0;
        for (int i=0;i<n;i++){
          if (arr[i]<r){
            r=arr[i];
            d=i;
          }
        }
        cout << d;
	return 0;
}
