#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
        //Дано целое число N (> 1) и набор из N чисел. Найти номера двух
        //соседних чисел из данного набора, произведение которых является мини-
        //мальным, и вывести вначале меньший, а затем больший номер.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        int m=INT_MAX;
        for (int i=0;i<n-1;i++){
          if (arr[i]*arr[i+1]<m)
            m=arr[i]*arr[i+1];          
        }
        for (int i=0;i<n-1;i++){
          if (arr[i]*arr[i+1]==m)
            cout << min(arr[i],arr[i+1]) << " " <<  max(arr[i],arr[i+1]); 
        }
	return 0;
}
