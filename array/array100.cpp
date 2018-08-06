#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    int n,i;

    cin >> n;
    vector<int> arr(n);
    for (i=0;i<n;i++){
    	cin >> arr[i];
	}
	
	vector<int>::iterator it;
	vector<int>::iterator jt;
	for (it=arr.begin();it!=arr.end();++it){
		int c=1;
		for (jt=arr.begin();jt!=arr.end();++jt){
			if (*jt==*it&&it!=jt){
				c++;
			}
		}
		if (c==2){
			int t=*it;
			jt=find(arr.begin(),arr.end(), t);
			arr.erase(jt);
			jt=find(arr.begin(),arr.end(), t);
			arr.erase(jt);
			it--;
		}
	}
	
	cout << arr.size() << endl;
	for (auto x: arr){
		cout << x << " ";
	}
	cout << endl;

    return 0;
}
