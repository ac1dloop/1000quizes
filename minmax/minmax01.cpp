#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N чисел. Найти минимальный и мак-
        //симальный из элементов данного набора и вывести их в указанном поряд-
        //ке.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        cout << *min_element(arr,arr+n) << " " << *max_element(arr,arr+n);
	return 0;
}
