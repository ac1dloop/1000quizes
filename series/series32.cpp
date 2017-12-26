#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Даны целые числа K , N , а также K наборов целых чисел по N элемен-
        //тов в каждом наборе. Для каждого набора вывести номер его первого эле-
        //мента, равного 2, или число 0, если в данном наборе нет двоек.
        int k,n;
        cin >> k >> n;
        int a;
        for (int i=0;i<k;i++){
          int l=1;
          for (int j=0;j<n;j++){
            cin >> a;
            if (a==2)
              break;
            l++;
          }
          cout << l << endl;
        }
	return 0;
}
