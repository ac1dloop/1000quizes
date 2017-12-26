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
          int l=3;
          bool f=true;
          cin >> a >> b >> c;
          if (!mm(a,b,c)&&c!=0){
            f=false;
            cout << b << endl;
          } else {
            a=b;
            b=c;
            for (;c!=0;l++){
              cin >> c;
              if (!mm(a,b,c)&&c!=0){
                f=false;
                cout << b << endl;
                break;
              }
              a=b;
              b=c;
            }
          }
          if (f)
            cout << l-1 << endl;
        }
        cout << s;
	return 0;
}
