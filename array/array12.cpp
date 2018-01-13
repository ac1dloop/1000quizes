#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив A размера N (N — четное число). Вывести его элементы с
        //четными номерами в порядке возрастания номеров: A 2 , A 4 , A 6 , ..., A N .
        //Условный оператор не использовать.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        for (int i=1;i<n;i+=2)
          cout << arr[i] << " ";
	return 0;
}
