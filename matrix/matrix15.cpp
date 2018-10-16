#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n=5,x,y;
	cin >> n;

	int a[n][n];

	for (int i=0;i<n;++i){
		for (int j=0;j<n;++j){
			cin >> a[i][j];
		}
	}

    x=0;y=0;
    int s0=n;
    int s1=n;
    int n_elements=n*n;
    int i,j;
    for(;;){
        for (i=x,j=y;j<s0;j++){
            cout << a[i][j] << " ";
            --n_elements;
            y=j;
            x=i+1;
        }
        if (n_elements==0){
            break;
        }

        cout << endl;
        s1--;

        for (i=x,j=y;i<=s1;i++){
            cout << a[i][j] << " ";
            --n_elements;
            x=i;
            y=j-1;
        }
        if (n_elements==0){
            break;
        }

        cout << endl;

        for (i=x,j=y;j>=n-s0;j--){
            cout << a[i][j] << " ";
            --n_elements;
            x=i-1;
            y=j;
        }
        if (n_elements==0){
            break;
        }

        cout << endl;
        s0--;

        for (i=x,j=y;i>=n-s1;i--){
            cout << a[i][j] << " ";
            --n_elements;
            x=i;y=j+1;
        }
        if (n_elements==0){
            break;
        }

        cout << endl;
    }

	return 0;
}
