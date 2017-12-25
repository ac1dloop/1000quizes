#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Найти двойной факториал N :
        //N !! = N ·( N –2 )·( N –4 )·...
        //(последний сомножитель равен 2, если N — четное, и 1, если N — нечет-
        //ное). Чтобы избежать целочисленного переполнения, вычислять это произ-
        //ведение с помощью вещественной переменной и вывести его как вещест-
        //венное число.
        int n;
        cin >> n;
        double r=1;
        while (n>=2){
          r*=n;
          n-=2;
        }
        cout << "S= " << r;
	return 0;
}
