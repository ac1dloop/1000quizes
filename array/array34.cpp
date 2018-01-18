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
          if (arr[i-1]<arr[i-2]&&arr[i-1]<arr[i])
            v.push_back(arr[i-1]);

        cout << *max_element(v.begin(),v.end());
	return 0;
}
