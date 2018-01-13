#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив A размера N. Вывести его элементы в следующем порядке:
        //A 1 , A 2 , A N , A N–1 , A 3 , A 4 , A N–2 , A N–3 , ... .
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        for (int i=0;i<n/2;i+=2){
          int j=i+1;
          cout << arr[i] << " " << arr[j] << " ";
          cout << arr[n-i-1] << " " << arr[n-j-1] << " ";
        }
	return 0;
}
