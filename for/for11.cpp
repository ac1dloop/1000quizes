#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Найти сумму
        //N 2 + ( N + 1 ) 2 + ( N + 2 ) 2 + ... + (2· N ) 2
        //(целое число).
        int n,s=0,l;
        cin >> n;
        l=2*n;
        for (int i=n;i<=l;i++){
          s+=n*n;
          n+=1;
        }
        cout << "S: " << s;
	return 0;
}
