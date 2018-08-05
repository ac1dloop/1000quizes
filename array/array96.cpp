#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n,i;

    cin >> n;
    vector<int> arr(n+1);
    for (i=0;i<n;i++){
    	cin >> arr[i];
	}
	arr[n]=arr[n+1];
	
	vector<int>::iterator it;
	vector<int>::iterator jt;
	for (it=arr.begin();it!=arr.end()-1;++it){
		for (jt=it;jt!=arr.end()-1;++jt){
			if (*it==*jt&&it!=jt){
				arr.erase(jt, jt+1);
				--jt;
			}
		}
	}
	
	arr.pop_back();
    
    for (auto x: arr){
    	cout << x << " ";
	}
	cout << endl;

    return 0;
}
