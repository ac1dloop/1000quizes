#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //ан целочисленный массив размера N. Вывести вначале все содержа-
        //щиеся в данном массиве четные числа в порядке возрастания их индексов,
        //а затем — все нечетные числа в порядке убывания их индексов.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        for (int i=0;i!=n;i++)
          if (arr[i]%2==0)
            cout << arr[i] << " ";
        cout << endl;
        for (int i=n-1;i>=0;i--)
          if (arr[i]%2!=0)
            cout << arr[i] << " ";
        cout << endl;
	return 0;
}
