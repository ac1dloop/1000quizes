#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан целочисленный массив размера N, не содержащий одинаковых
        //чисел. Проверить, образуют ли его элементы арифметическую прогрессию
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];  
        
        for (int i=n-1;i>=2;i--){
          if (arr[i]-arr[i-1]!=arr[i-1]-arr[i-2]){
            cout << 0;
            return 0;
          }
        }
        cout << arr[n-1]-arr[n-2];
	return 0;
}
