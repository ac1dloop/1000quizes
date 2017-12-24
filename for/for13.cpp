#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Найти значение выражения
        //1.1 – 1.2 + 1.3 – ...
        //( N слагаемых, знаки чередуются ). Условный оператор не использовать.
        int n;
        cin >> n;
        double s1=0;
        double a=1.1;
        double s2=0;
        for (int i=0;i<n/2;i++){
          s1+=a;
          a+=0.2;
        }
        a=-1.2;
        for (int i=0;i<n/2;i++){
          s2+=a;
          a-=0.2;
        }
        cout << "S= " << s1+s2;
	return 0;
}
