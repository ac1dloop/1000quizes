#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Найти сумму
        //1 + 1/2 + 1/3 + ... + 1/ N
        //(вещественное число).
        int n; double s=0;
        cin >> n;
        for (int i=1;i<n;i++){
                s+= (double)1/i;
        }
        cout << "S: " << s;
	return 0;
}
