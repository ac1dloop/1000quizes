#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N прямоугольников, заданных своими
        //сторонами — парами чисел (a, b). Найти максимальный периметр прямо-
        //угольника из данного набора.
        int n;
        cin >> n;
        int arr[n];
        int a,b;
        for (int i=0;i<n;i++){
          cin >> a >> b;
          arr[i]=2*a+2*b;
        }
        cout << *min_element(arr,arr+n) << " " << *max_element(arr,arr+n);
	return 0;
}
