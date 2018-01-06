#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано число B (> 0) и набор из десяти чисел. Вывести минимальный
        //из тех элементов набора, которые больше B, а также его номер. Если чисел,
        //больших B, в наборе нет, то дважды вывести 0.
        int b;
        cin >> b;
        vector<int> v;
        for (int i=0;i<10;i++){
          int a;
          cin >> a;
          if (a>b)
            v.push_back(a);
        }
        if (v.size()==0)
          cout << "00";
        else cout << *min_element(v.begin(),v.end());
	return 0;
}
