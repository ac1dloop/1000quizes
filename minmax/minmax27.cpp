#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел, содержащий только
        //нули и единицы. Найти номер элемента, с которого начинается самая
        //длинная последовательность одинаковых чисел, и количество элементов в
        //этой последовательности. Если таких последовательностей несколько, то
        //вывести номер первой из них.
        int n;
        cin >> n;
        vector<int> v;
        int a,b;
        cin >> a;
        for (int i=1;i<n;i++){
          cin >> b;
          if (b!=a){
            v.push_back(i);
          }
          a=b;
        }
        int m=INT_MIN;
        for (unsigned i=0;i<v.size()-1;i++){
          if (v[i+1]-v[i]>m)
            m=v[i+1]-v[i];
        }
        for (unsigned i=0;i<v.size()-1;i++){
          if (v[i+1]-v[i]==m){
            cout << v[i] << " " << v[i+1]-v[i];
            break;
          }
        }
	return 0;
}
