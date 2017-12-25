#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0), являющееся некоторой степенью числа 2:
        //N = 2 K . Найти целое число K — показатель этой степени.
        int n;
        cin >> n;
        int a=0;
        while (n!=1){
          n/=2;
          a++;
        }
        cout << a;
	return 0;
}
