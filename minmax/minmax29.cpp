#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел. Найти максимальное
        //количество подряд идущих минимальных элементов из данного набора.
        int n;
        cin >> n;
        int arr[n];
        vector<int> v;
        for (int i=0;i<n;i++)
          cin >> arr[i];
        int min=*min_element(arr,arr+n);
        int s=1;
        for (int i=1;i<n;i++){
          if (arr[i]==min&&arr[i-1]==min)
            s++;
          if (arr[i]!=min){
            v.push_back(s);
            s=0;
          }
        }

        cout << *max_element(v.begin(),v.end());
	return 0;
}
