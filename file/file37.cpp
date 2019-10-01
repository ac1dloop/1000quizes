#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

using namespace std;

int main(int argc, char **argv)
{
	if (argc!=2){
		cout << "Usage " << argv[0] << " filename1" << endl;
		return 1;
	}

    fstream file(argv[1], ios_base::in);
    vector<int> vec;
    copy(istream_iterator<int>(file), istream_iterator<int>(), back_inserter(vec));
    file.close();
    file.open(argv[1], ios_base::out | ios_base::trunc);
    for (int i=0;i<vec.size();++i){
        file << vec[i] << ' ';
    }
    for (int i=vec.size()-1;i!=0;--i){
        file << vec[i] << ' ';
    }

    file.close();
	
	return 0;
}
