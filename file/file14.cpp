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
	vector<double> vec;
	copy(istream_iterator<double>(in), istream_iterator<double>(), back_inserter(vec));
	cout << accumulate(begin(vec), end(vec), 0.0)/vec.size();

	return 0;
}
