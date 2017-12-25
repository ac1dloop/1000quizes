#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны целые числа K , N и набор из N целых чисел. Если в наборе
        //имеются числа, меньшие K , то вывести True; в противном случае вывести
        //False.
        int k,n;
        cin >> k >> n;
        int a;
        bool f=false;
        for (int i=0;i<n;i++){
          cin >> a;
          if (a<k){
            cout << "TRUE";
            f=true;
            break;
          }
        }
        if (!f)
          cout << "FALSE";
	return 0;
}
