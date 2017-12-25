#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 1). Если оно является простым , то есть не
        //имеет положительных делителей, кроме 1 и самого себя, то вывести True,
        //иначе вывести False.
        int n;
        cin >> n;
        int i=1;
        bool f=false;
        while (i<n){
          i++;
          if (n%i==0&&n!=i){
            cout << "FALSE";
            f=true;
            break;
          }
        }
        if (!f)
          cout << "TRUE";
	return 0;
}
