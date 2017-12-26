#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N (> 1) и набор из N целых чисел. Вывести те эле-
        //менты в наборе, которые меньше своего правого соседа, и количество K
        //таких элементо  
        int n;
        cin >> n;
        int a,b,k=0;
        cin >> a >> b;
        if (a<b){
          cout << a << endl;
          k++;
        }
        a=b;
        for (int i=0;i<n-2;i++){
          cin >> b;
          if (a<b){
            cout << a << endl;
            k++;
          }
          a=b;
        }

        cout << k;
	return 0;
}
