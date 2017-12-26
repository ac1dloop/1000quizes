#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Даны целые числа K , N , а также K наборов целых чисел по N элемен-
        //тов в каждом наборе. Для каждого набора вывести номер его последнего
        //элемента, равного 2, или число 0, если в данном наборе нет двоек.
        int k,n;
        cin >> k >> n;
        for (int i=0;i<k;i++){
          int arr[n];
          for (int j=0;j<n;j++){
            cin >> arr[j];
          }
          for (int j=n-1;j>=0;j--){
            if (arr[j]==2){
              cout << j+1 << endl;
              break;
            }
          }
        }
        return 0;
}
