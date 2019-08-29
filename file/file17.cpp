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

	fstream in(argv[1], ios_base::in);
	fstream out("out.txt", ios_base::out);
	vector<int> vec;
	copy(istream_iterator<int>(in), istream_iterator<int>(), back_inserter(vec));
	auto j=1;
	for (auto i=1;i<vec.size();++i){
		if (vec[i]!=vec[i-1]){
			out << j << ' ';
			j=0;
		}
		++j;
	}
	out << j << ' ';
	
	return 0;
}
