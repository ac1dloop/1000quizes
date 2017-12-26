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
        //Дано целое число N (> 2) и набор из N вещественных чисел. Набор
        //называется пилообразным , если каждый его внутренний элемент либо
        //больше, либо меньше обоих своих соседей (то есть является «зубцом»).
        //Если данный набор является пилообразным, то вывести 0; в противном
        //случае вывести номер первого элемента, не являющегося зубцом.
        int n;
        cin >> n;
        double a,b,c,k=0;
        cin >> a >> b >> c;
        if (!mm(a,b,c)){
          cout << b;
          return 0;
        }
        a=b;
        b=c;
        for (int i=0;i<n-3;i++){
          cin >> c;
          if (!mm(a,b,c)){
            k=b;
            break;
          }
          a=b;
          b=c;
        }
        cout << k;
	return 0;
}
