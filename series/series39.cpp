#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool max(double a,double b,double c){
       if (b>a&&b>c)
           return true;
       return false;
       
}
  
  bool min(double a, double b, double c){
       if (b<a&&b<c)
           return true;
        return false;
       
 }
  
  bool mm(double a,double b,double c){
       return max(a,b,c)||min(a,b,c);
      
 }

int main()
{
        //Дано целое число K , а также K наборов ненулевых целых чисел. Ка-
        //ждый набор содержит не менее трех элементов, признаком его завершения
        //является число 0. Найти количество пилообразных наборов (определение
        //пилообразного набора дано в задании Series23).
        int k;
        cin >> k;
        int s=0;
        for (int i=0;i<k;i++){
          int a,b,c;
          bool f=true;
          cin >> a >> b >> c;
          if (!mm(a,b,c)&&c!=0){
            f=false;
          } else {
            a=b;
            b=c;
            for (;c!=0;){
              cin >> c;
              if (!mm(a,b,c)&&c!=0){
                f=false;
                break;
              }
              a=b;
              b=c;
            }
          }
          if (f)
            s++;
        }
        cout << s;
	return 0;
}
