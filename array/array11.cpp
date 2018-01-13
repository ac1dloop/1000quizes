#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив A размера N и целое число K (1 ≤ K ≤ N). Вывести элемен-
        //ты массива с порядковыми номерами, кратными K: A K , A 2·K , A 3·K , ... .
        //Условный оператор не использовать.
        int n,k;
        cin >> n >> k;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        for (int i=k-1;i<n;i+=k)
          cout << arr[i] << " ";
	return 0;
}
