#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дан размер файла в байтах. Используя операцию деления нацело,
	//найти количество полных килобайтов, которые занимает данный файл
	//(1 килобайт = 1024 байта).
	int b;
	cin >> b;
	cout << b/1024 << "kb\n";
	return 0;
}
