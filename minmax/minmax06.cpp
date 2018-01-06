#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел. Найти номера первого
        //минимального и последнего максимального элемента из данного набора и
        //вывести их в указанном порядке.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        int a=0,b=0;
        for (int i=0;i<n;i++){
          if (*min_element(arr,arr+n)==arr[i]){
            a=i;
            break;
          }
        }
        for (int i=n-1;i!=0;i--){
          if (*max_element(arr,arr+n)==arr[i]){
            b=i;
            break;
          }
        }
        cout << a << " " << b;
	return 0;
}
