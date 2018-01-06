#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел. Найти количество
        //элементов, содержащихся между первым и последним максимальным эле-
        //ментом. Если в наборе имеется единственный максимальный элемент, то
        //вывести 0.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];

        int a=0;
        for (int i=0;i<n;i++){
          if (arr[i]==*max_element(arr,arr+n)){
            a=i;
            break;
          }
        }
        for (int i=n-1;i!=0;i--){
          if (arr[i]==*max_element(arr,arr+n)){
            cout << i-a;
            break;
          }
        }
        return 0;
}
