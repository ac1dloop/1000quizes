#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел. Если в наборе имеют-
        //ся положительные числа, то вывести True; в противном случае вывести
        //False.
        int n;
        cin >> n;
        bool f=false;
        int a;
        for (int i=0;i<n;i++){
          cin >> a;
          if (a>0){
            cout << "TRUE";
            f=true;
            break;
          }
        }
        if (!f)
          cout << "FALSE";
	return 0;
}
