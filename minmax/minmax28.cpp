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
        //длинная последовательность единиц, и количество элементов в этой по-
        //следовательности. Если таких последовательностей несколько, то вывести
        //номер последней из них. Если единицы в исходном наборе отсутствуют, то
        //дважды вывести 0.
        int n;
        cin >> n;
        vector<int> v;
        vector<int> sz;
        int a,b,s=0;
        cin >> a;
        bool f=false;
        if (a==1){
          v.push_back(0);
          f=true;
        }
        for (int i=1;i<n;i++){          
          if (f)
            s++;
          cin >> b;
          if (b==1&&a==0){
            v.push_back(i);
            f=true;
          }
          if (b==0&&a==1){
            sz.push_back(s);
            f=false;
            s=0;
          }
          if (i==n-1&&b==1){
            sz.push_back(s+1);
            f=false;
            s=0;
          }
          a=b;
        }
        a=*max_element(sz.begin(),sz.end());
        for (unsigned i=sz.size()-1;i>=0;i--){
          if (sz[i]==a){
            cout << v[i] << " " << a;
            break;
          }
        }

        return 0;
}
