#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Найти произведение
        //1.1 · 1.2 · 1.3 · ...
        //( N сомножителей ).
        int n;
        double s=1;
        double a=1.1;
        cin >> n;
        for (int i=0;i<n;i++){
          s*=a;
          a+=0.1;
        }
        cout << "s: " << s;
	return 0;
}
