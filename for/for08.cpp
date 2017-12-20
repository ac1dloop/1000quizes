#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны два целых числа A и B ( A < B  ). Найти произведение всех целых чи-
        //сел от A до B включительно.
        int a,b,s=1;
        cin >> a >> b;
        for (int i=a;i<=b;i++){
          s*=i;
        }
        cout << "S: " << s;
	return 0;
}
