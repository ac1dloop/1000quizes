#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив размера N и целые числа K и L (1 < K ≤ L ≤ N). Найти сум-
        //му всех элементов массива, кроме элементов с номерами от K до L вклю-
        //чительно.
        int n;
        cin >> n;
        int k,l;
        cin >> k >> l;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        int s=0;
        arr[k]=0;
        for (int i=0;i<n;i++){
          if (i>=k+1&&i<=l+1){
            continue;
          } else {
            arr[k]++;
            s+=arr[i];
          }
        }
        cout << s/arr[k];
	return 0;
}
