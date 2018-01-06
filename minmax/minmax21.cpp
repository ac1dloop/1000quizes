#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N (> 2) и набор из N чисел — значений некоторой
        //величины, полученных в N опытах. Найти среднее значение этой величи-
        //ны. При вычислении среднего значения не учитывать минимальное и мак-
        //симальное из имеющихся в наборе значений
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        double s=0;
        int c=0;
        for (int i=0;i<n;i++){
          if (arr[i]==*max_element(arr,arr+n)||arr[i]==*min_element(arr,arr+n)){

          } else {
            s+=arr[i];
            c++;
          }
        }
        cout << s/c;
	return 0;
}
