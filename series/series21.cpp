#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N (> 1) и набор из N вещественных чисел. Прове-
        //рить, образует ли данный набор возрастающую последовательность. Если
        //образует, то вывести True, если нет — вывести False.
        int n;
        cin >> n;
        double a,b;
        bool f=true;
        cin >> a >> b;
        if (b<a){
          cout << "FALSE";
          return 0;
        }
        a=b;
        for (int i=0;i<n-2;i++){
          cin >> b;
          if (b<a){
            cout << "FALSE";
            f=false;
            break;
          }
          a=b;
        }
        if (f)
          cout << "TRUE";
	return 0;
}
