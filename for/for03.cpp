#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны два целых числа A и B ( A < B  ). Вывести в порядке убывания все це-
        //лые числа, расположенные между A и B (не включая числа A и B ), а также
        //количество N этих чисел.
        int a,b;
        cin >> a >> b;
        int i=0;
        for (i=b-1;i>a;i--){
          cout << i << endl;
        }
        cout << "N: " << b-a-1;
	return 0;
}
