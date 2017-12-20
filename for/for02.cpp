#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны два целых числа A и B ( A < B  ). Вывести в порядке возрастания все
        //целые числа, расположенные между A и B (включая сами числа A и B ),
        //а также количество N этих чисел.
        int a,b;
        cin >> a >> b;
        for (int i=a;i<=b;i++){
          cout << i << endl;
        }
	return 0;
}
