#include <iostream>

//��� ������ ������� N. ����� ���������� ��� ����������� ������������ (�� ���� ��������, �� ������� ��� �������� ���������� ��� �������).

using namespace std;

int main()
{
	int n,a,b,c=0;
	cin >> n;
	cin >> a;
	for (int i=0;i<n-1;i++){
		cin >> b;
		if (b<a||b>a)
			c++;
		a=b;
	}	
	cout << c;
}
