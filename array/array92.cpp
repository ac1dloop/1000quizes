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
	arr[n]=2;
	
	vector<int>::iterator it;
	for (it=arr.begin();it!=arr.end();++it){
		if (*it%2!=0){
			arr.erase(it,it+1);
		}
	}
	arr.pop_back();
    
    cout << arr.size() << endl;
    for (auto x: arr){
    	cout << x << " ";
	}
	cout << endl;

    return 0;
}
