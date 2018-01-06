#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел. Найти количество
        //элементов, расположенных перед первым минимальным элементом.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        for (int i=0;i<n;i++){
          if (arr[i]==*min_element(arr,arr+n)){
            cout << i;
            break;
          }
        }
	return 0;
}
