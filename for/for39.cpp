#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны целые положительные числа A и B ( A < B  ). Вывести все целые
        //числа от A до B включительно; при этом каждое число должно выводиться
        //столько раз, каково его значение (например, число 3 выводится 3 раза).
        int a,b;
        cin >> a >> b;
        for (int i=a;i<=b;i++){
          for (int j=0;j<i;j++){
            cout << i << endl;
          }
        }
	return 0;
}
