#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число K , а также K наборов ненулевых целых чисел. Ка-
        //ждый набор содержит не менее двух элементов, признаком его завершения
        //является число 0. Найти количество наборов, элементы которых возраста-
        //ют.
        int n;
        cin >> n;
        int s=0;
        for (int i=0;i<n;i++){
          int a,b;
          cin >> a >> b;
          if (b<a){
            cout << s;
            return 0;
          }
          a=b;
          bool f=false;
          for (;b!=0;){
            cin >> b;
            if (b!=0&&b<a){
              f=false;
              break;
            }
            f=true;
          }
          if (f)
            s++;
        }
        cout << s;
	return 0;
}
