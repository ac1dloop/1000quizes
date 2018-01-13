#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив A размера N. Вывести вначале его элементы с четными
        //номерами (в порядке возрастания номеров), а затем — элементы с нечет-
        //ными номерами (также в порядке возрастания номеров):Условный оператор не использовать.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        for (int i=0;i<n;i+=2)
          cout << arr[i] << " ";
        cout << endl;
        for (int i=1;i<n;i+=2)
          cout << arr[i] << " ";
	return 0;
}
