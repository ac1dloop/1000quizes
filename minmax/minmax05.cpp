#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
        //Дано целое число N и набор из N пар чисел (m, v) — данные о массе
        //m и объеме v деталей, изготовленных из различных материалов. Вывести
        //номер детали, изготовленной из материала максимальной плотности, а
        //также величину этой максимальной плотности. Плотность P вычисляется
        //по формуле P = m/v.
        int n;
        cin >> n;
        double a,b;
        double arr[n];
        for (int i=0;i<n;i++){
          cin >> a >> b;
          arr[i]=a/b;
        }
        double r=INT_MIN;
        int d=0;
        for (int i=0;i<n;i++){
          if (r<arr[i]){
            d=i;
            r=arr[i];
          }

        }
        cout << d << " " << r;
	return 0;
}
