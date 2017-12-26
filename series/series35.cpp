#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число K , а также K наборов ненулевых целых чисел. При-
        //знаком завершения каждого набора является число 0. Для каждого набора
        //вывести количество его элементов. Вывести также общее количество эле-
        //ментов во всех наборах.
        int k;
        cin >> k;
        int s=0;
        for (int i=0;i<k;i++){
          int a;
          cin >> a;
          int l=1;
          for(;a!=0;){
            cin >> a;
            l++;
          }
          cout << l << endl;
          s+=l;
        }
        cout << s;
	return 0;
}
