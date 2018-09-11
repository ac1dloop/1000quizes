#include <iostream>
#include <cstring>
#include <climits>
#include <cmath>

using namespace std;

int main()
{
	for (unsigned long long i=1;i<=LLONG_MAX;i++){
		cout << (i*(i+1))/2 << ", ";
	}	
}

