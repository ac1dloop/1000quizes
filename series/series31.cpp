#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Даны целые числа K , N , а также K наборов целых чисел по N элемен-
        //тов в каждом наборе. Найти количество наборов, содержащих число 2. Ес-
        //ли таких наборов нет, то вывести 0.
        int k,n;
        cin >> k >> n;
        int a,s=0;
        for (int i=0;i<k;i++){
          bool f=false;
          for (int j=0;j<n;j++){
            cin >> a;
            if (a==2)
              f=true;
          }
          if (f)
            s++;
        }
        cout << s;
	return 0;
}
