#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Даны целые числа K , N , а также K наборов целых чисел по N элемен-
        //тов в каждом наборе. Для каждого набора выполнить следующее действие:
        //если в наборе содержится число 2, то вывести сумму его элементов; если в
        //наборе нет двоек, то вывести 0.
        int k,n;
        cin >> k >> n;
        for (int i=0;i<k;i++){
          int arr[n];
          int s=0;
          bool f=false;
          for (int j=0;j<n;j++){
            cin >> arr[j];
            if (arr[j]==2)
              f=true;
          }
          if (f){
            for (int j=0;j<n;j++)
              s+=arr[j];
          }
          cout << s << endl;
        }
	return 0;
}
