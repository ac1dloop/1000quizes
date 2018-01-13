#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив A размера N. Вывести его элементы в следующем порядке:
        //A 1 , A N , A 2 , A N–1 , A 3 , A N–2 , ... .
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        for (int i=0;i<n/2;i++){
          cout << arr[i] << " " << arr[n-i-1] << " ";
        }
	return 0;
}
