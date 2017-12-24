#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны целые числа A и B ( A < B  ). Вывести все целые числа от A до B
        //включительно; при этом число A должно выводиться 1 раз, число A + 1
        //должно выводиться 2 раза и т. д.
        int a,b;
        cin >> a >> b;
        for (int i=a;i<=b;i++){
          int j=i-a+1;
          for (int k=1;k<=j;k++){
            cout << i << endl;
          }
        }
	return 0;
}
