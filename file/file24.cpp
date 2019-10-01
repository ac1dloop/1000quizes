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
	fstream out("out.txt", ios_base::out | ios_base::trunc);
	vector<double> vec;
	copy(istream_iterator<double>(in), istream_iterator<double>(), back_inserter(vec));
	vector<int> res;
	int less=1;
	int more=1;
	for (int i=1;i<vec.size();++i){
		if (vec[i-1]>vec[i]){
			less++;
		} else if (less!=1){
			res.push_back(less);
			less=1;
		}

		if (vec[i-1]<vec[i]){
			more++;
		} else if (more!=1){
			res.push_back(more);
			more=1;
		}
	}
	if (less != 1)
		res.push_back(less);
	if (more!=1)
		res.push_back(more);

	copy(res.begin(), res.end(), ostream_iterator<int>(out, " "));
	out.close();
	in.close();
	
	return 0;
}
