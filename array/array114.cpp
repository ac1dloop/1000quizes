#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <limits>
#include <list>

using namespace std;

int main()
{
    int n;
    int i=0;

    cin >> n;
    int arr[n];
    list<int> res;
    for (i=0;i<n;++i){
    	cin >> arr[i];
	}

    res.push_back(arr[0]);
    list<int>::iterator it;

   for (i=1;i<n;++i){
       it=res.end();
       --it;
       if (arr[i]>*it)
           res.push_back(arr[i]);
       else {
           for (it=res.begin();it!=res.end();++it){
               if (arr[i]<*it){
                   res.insert(it, arr[i]);
                   break;
               }
           }
       }
   } 
	
	for (auto x: res){
		cout << x << " ";
	}
	cout << endl;

    return 0;
}
