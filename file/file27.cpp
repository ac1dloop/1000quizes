#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, char **argv)
{
	if (argc!=2){
		cout << "Usage " << argv[0] << " filename1" << endl;
		return 1;
	}

    fstream file(argv[1], ios_base::in);
    vector<double> vec;
    copy(istream_iterator<double>(file), istream_iterator<double>(), back_inserter(vec));

    file.close();
    file.open(argv[1], ios_base::out | ios_base::trunc);
    for (int i=0;i<vec.size();++i){
        file << vec[i] << ' ' << vec[vec.size()-i-1] << ' ';
    }

    file.close();
	
	return 0;
}
