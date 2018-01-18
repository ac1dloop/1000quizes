#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив размера N. Найти максимальный из его локальных мини-
        //мумов (определение локального минимума дано в задании Array32).
        int n;
        cin >> n;
        int arr[n];
        vector<int> v;
        for (int i=0;i<n;i++)
          cin >> arr[i];

        for (int i=2;i<n;i++)
          if ((arr[i-1]>arr[i-2]&&arr[i-1]>arr[i])||(arr[i-1]<arr[i-2]&&arr[i-1]<arr[i])){

          } else {
            v.push_back(arr[i-1]);
          }

        if (v.size()==0){
          cout << 0;
        } else cout << *max_element(v.begin(),v.end());
	return 0;
}
