#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Даны целые числа K , N , а также K наборов целых чисел по N элемен-
        //тов в каждом наборе. Вывести общую сумму всех элементов, входящих в
        //данные наборы.
        int k,n;
        cin >> k >> n;
        int a,s=0;
        for (int i=0;i<k;i++){
          for (int j=0;j<n;j++){
            cin >> a;
            s+=a;
          }
        }
        cout << s;
	return 0;
}
