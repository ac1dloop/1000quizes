#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
        //Дан массив A размера N. Найти минимальный элемент из его элемен-
        //тов с четными номерами: A 2 , A 4 , A 6 , ... .
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++){
          cin >> arr[i];
          if (arr[i]%2!=0)
            arr[i]=INT_MAX;
        }
        cout << *min_element(arr,arr+n);
        
	return 0;
}
