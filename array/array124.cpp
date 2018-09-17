#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<vector<int>> splittoseq(const vector<int>& in)
{
    vector<vector<int>> res;
    vector<int> cpy=in;
    cpy.push_back(cpy[cpy.size()-1]-1);
    int b;
    int t=1;
    for (int i=1;i<cpy.size();++i){
        b=cpy[i];
        if (b==cpy[i-1]){
            t++;
        } else {
            vector<int> tmp(t);
            std::fill(tmp.begin(), tmp.end(), cpy[i-1]);
            res.push_back(tmp);
            t=1;
        }
    }
    return res;
}

vector<int> seqtovec(const vector<vector<int>>& in)
{
    vector<int> res;
    for (auto x: in){
        for (auto i: x){
            res.push_back(i);
        }
    }
    return res;
}

int main()
{
    int n,k;
    int i=0;
    cin >> k >> n;
    vector<int> arr;

    int t;
    for (i=0;i<n;++i){
        cin >> t;
        arr.push_back(t);
    }

    vector<vector<int>> seqs=splittoseq(arr);
    --k;
    if (k<=seqs.size()){
    	swap(seqs[seqs.size()-1], seqs[k]);
	}
    
    vector<int> res=seqtovec(seqs);

    for (auto x: res){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
