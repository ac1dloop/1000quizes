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
	for (it=arr.begin();it!=arr.end()-1;++it){
		cout << "it= " << *it << endl; 
		if (*it==*(it+1)){
			arr.erase(it, it+1);
			--it;
		}
	}
	arr.pop_back();
    
    for (auto x: arr){
    	cout << x << " ";
	}
	cout << endl;

    return 0;
}
