#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел. Найти количество
        //элементов, расположенных после последнего максимального элемента.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        for (int i=n-1;i!=0;i--){
          if (arr[i]==*max_element(arr,arr+n)){
            cout << n-i;
            break;
          }
        }
	return 0;
}
