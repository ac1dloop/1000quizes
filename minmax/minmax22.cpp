#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
        //Дано целое число N (> 2) и набор из N чисел. Найти два наимень-
        //ших элемента из данного набора и вывести эти элементы в порядке возрас-
        //тания их значений.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        int a=*min_element(arr,arr+n);
        for (int i=0;i<n;i++)
          if (arr[i]==a)
            arr[i]=INT_MAX;
        cout << a << " " << *min_element(arr,arr+n);
	return 0;
}
