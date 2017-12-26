#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Даны целые числа K , N , а также K наборов целых чисел по N элемен-
        //тов в каждом наборе. Для каждого набора вывести сумму его элементов.
        int k,n;
        cin >> k >> n;
        for (int j=0;j<k;j++){
          int s=0;
          int a;
          for (int i=0;i<n;i++){
            cin >> a;
            s+=a;
          }
          cout << s << endl;
        }
	return 0;
}
