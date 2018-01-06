#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{ 
        //Даны числа B, C (0 < B < C) и набор из десяти чисел. Вывести мак-
        //симальный из элементов набора, содержащихся в интервале (B, C), и его
        //номер. Если требуемые числа в наборе отсутствуют, то дважды вывести 0.
        int b,c;
        cin >> b >> c;
        vector<int> v;
        for (int i=0;i<10;i++){
          int a;
          cin >> a;
          if (a>b&&a<c)
            v.push_back(a);
        }
        if (v.size()==0)
          cout << "00";
        else cout << *max_element(v.begin(),v.end());
	return 0;
}
