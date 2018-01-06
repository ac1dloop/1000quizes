#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N (> 1) и набор из N чисел. Найти максимальную
        //сумму двух соседних чисел из данного набора.
        int n;
        cin >> n;
        int arr[n];
        int a,b;
        cin >> a;
        arr[0]=a;
        for (int i=1;i<n;i++){
          cin >> b;
          arr[i]=a+b;
          a=b;
        }
        cout << *max_element(arr,arr+n);

	return 0;
}
