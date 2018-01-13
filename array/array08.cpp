#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан целочисленный массив размера N. Вывести все содержащиеся в
        //данном массиве четные числа в порядке убывания их индексов, а также их
        //количество K.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        int k=0;
        for (int i=n-1;i>=0;i--)
          if (arr[i]%2==0){
            cout << arr[i] << " ";
            k++;
          }

        cout << endl;
        cout << k;
	return 0;
}
