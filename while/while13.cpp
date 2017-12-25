#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано число A (> 1). Вывести наименьшее из целых чисел K , для кото-
        //рых сумма 1 + 1/2 + ... + 1/ K будет больше A , и саму эту сумму.
        double a;
        cin >> a;
        double s=0;
        int i=1;
        while (s<=a){
          s+=1/i;
          i++;          
        }
        cout << i << " " << s;
	return 0;
}
