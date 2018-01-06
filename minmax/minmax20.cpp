#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел. Найти общее коли-
        //чество экстремальных (то есть минимальных и максимальных) элементов
        //из данного набора.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];

        int a=*max_element(arr,arr+n);
        int b=*min_element(arr,arr+n);
        int c=0;
        for (int i=0;i<n;i++){
          if (arr[i]==a||arr[i]==b)
            c++;
        }
        cout << c;
	return 0;
}
