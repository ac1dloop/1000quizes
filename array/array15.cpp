#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив A размера N. Вывести вначале его элементы с нечетными
        //номерами в порядке возрастания номеров, а затем — элементы с четными
        //номерами в порядке убывания номеров.
        //A 1 , A 3 , A 5 , ..., A 6 , A 4 , A 2 .
        //Условный оператор не использовать.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        for (int i=0;i<n;i+=2)
          cout << arr[i] << " ";
        cout << endl;
        if (n%2==0){
          for (int i=n-1;i>=0;i-=2)
            cout << arr[i] << " ";
        } else {
          for (int i=n-2;i>=0;i-=2)
            cout << arr[i] << " ";
        }
	return 0;
}
