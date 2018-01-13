#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив A размера N (N — нечетное число). Вывести его элементы
        //с нечетными номерами в порядке убывания номеров: A N , A N–2 , A N–4 , ..., A 1 .
        //Условный оператор не использовать.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        if (n%2==0){
          for (int i=n-2;i>=0;i-=2)
            cout << arr[i] << " ";
        } else {
          for (int i=n-1;i>=0;i-=2)
            cout << arr[i] << " ";
        }
	return 0;
}
