#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел. Найти минимальное
        //количество подряд идущих максимальных элементов из данного набора.
        int n;
        cin >> n;
        int arr[n];
        vector<int> v;
        for (int i=0;i<n;i++)
          cin >> arr[i];
        int max=*max_element(arr,arr+n);
        int s=1;
        for (int i=1;i<n;i++){
          if (arr[i]==max&&arr[i-1]==max)
            s++;
          if (arr[i]!=max){
            v.push_back(s);
            s=0;
          }
        }

        for (unsigned i=0;i<v.size();i++){
          if (v[i]==0)
            v[i]=INT_MAX;
        }
        cout << *min_element(v.begin(),v.end());
	return 0;
}
