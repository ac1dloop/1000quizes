#include <iostream>
#include <cmath>
#include <climits>
//���� ����� R � ������ A ������� N. ����� ������� �������, �������
//�������� ������ � ����� R (�� ���� ����� ������� AK, ��� �������� �������� |AK � R| �������� �����������).

using namespace std;

int main()
{
	int r,n,a,min=INT_MAX,res;
	cin >> r >> n;
	for (int i=0;i<n;i++){
		cin >> a;
		if (abs(a-r)<min){
			min=abs(a-r);
			res=a;
		}
	}
	cout << res;
}
