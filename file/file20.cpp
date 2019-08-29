#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

template <typename T>
bool min(T a, T b, T c){
	return a<b&&a<c?true:false;
}

template <typename T>
bool max(T a, T b, T c){
	return a>b&&a>c?true:false;
}

int main(int argc, char **argv)
{
	if (argc!=2){
		cout << "Usage " << argv[0] << " filename1" << endl;
		return 1;
	}

	fstream in(argv[1], ios_base::in);
	fstream out("out.txt", ios_base::out);
	vector<double> vec;
	copy(istream_iterator<double>(in), istream_iterator<double>(), back_inserter(vec));
	int count=0;
	for (auto i=1;i<vec.size()-1;++i){
		if (min(vec[i], vec[i-1], vec[i+1]) || max(vec[i], vec[i-1], vec[i+1]))
			++count;
	}

	cout << count << '\n';
	
	return 0;
}
