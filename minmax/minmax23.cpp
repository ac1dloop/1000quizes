#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
using namespace std;

int main()
{
        //Дано целое число N (> 3) и набор из N чисел. Найти три наиболь-
        //ших элемента из данного набора и вывести эти элементы в порядке убыва-
        //ния их значений.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        int a=*max_element(arr,arr+n);
        for (int i=0;i<n;i++)
          if (arr[i]==a){
            arr[i]=INT_MIN;
            break;
          }
        int b=*max_element(arr,arr+n);
        for (int i=0;i<n;i++)
          if (arr[i]==a){
            arr[i]=INT_MIN;
            cout << a << " " << b << " " << *max_element(arr,arr+n);
            break;
          }
	return 0;
}
