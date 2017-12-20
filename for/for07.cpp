#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны два целых числа A и B ( A < B  ). Найти сумму всех целых чисел от A
        //до B включительно.
        int a,b,s=0;
        cin >> a >> b;
        for (int i=a;i<=b;i++){
          s+=i;
        }
        cout << "S: " << s;
	return 0;
}
