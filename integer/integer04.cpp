#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны целые положительные числа A и B ( A > B  ). На отрезке длины A
	//размещено максимально возможное количество отрезков длины B (без на-
	//ложений). Используя операцию деления нацело, найти количество отрез-
	//ков B , размещенных на отрезке A .
	int a, b;
	cin >> a >> b;
	cout << a/b << endl;	
	return 0;
}