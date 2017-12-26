#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N (> 1) и набор из N целых чисел. Вывести те эле-
        //менты в наборе, которые меньше своего левого соседа, и количество K та-
        //ких элементов.
        int n;
        cin >> n;
        int k=0;
        int a,b;
        cin >> a >> b;
        if (b<a){
          cout << b << endl;
          k++;
        }
        a=b;
        for (int i=0;i<n-2;i++){
          cin >> b;
          if (b<a){
            cout << b << endl;
            k++;
          }
          a=b;
        }
        cout << k;
	return 0;
}
