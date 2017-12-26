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
          bool f=true;
          if (b<a){
            a=b;
            for (;b!=0;){
              cin >> b;
              if (b>a&&b!=0){
                f=false;
                break;
              }
            }
          } else {
            a=b;
            for (;b!=0;){
              cin >> b;
              if (b<a&&b!=0){
                f=false;
                break;
              }
            }
          }
          if (f)
            s++;
        }
        cout << s;
	return 0;
}
