#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел. Найти максимальное
        //количество четных чисел в наборе, идущих подряд. Если четные числа в
        //наборе отсутствуют, то вывести 0.
        int n;
        cin >> n;
        int c=0;
        vector<int> v;
        for (int i=0;i<n;i++){
          c++;
          int a;
          cin >> a;
          if (a<0){
            v.push_back(c);
            c=0;
          }
        }
        if (v.size()==0){
          cout << n;
          return 0;
        }
        cout << *max_element(v.begin(),v.end())-1;
	return 0;
}
