#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	if (argc!=2){
		cout << "Usage " << argv[0] << " filename1" << endl;
		return 1;
	}

	double t;
	vector<double> vec;
	
	std::fstream file(argv[1], std::ios_base::in);
	
	for (;;){
		if (!file)
			break;

		file >> t;
		vec.push_back(t);
	}

	file.close();

	fstream odd("odd.out", std::ios_base::out);
	fstream even("even.out", std::ios_base::out);

	for (unsigned i=0;i<vec.size();i+=2){
		even << vec[i] << ", ";
		odd << vec[i+1] << ", ";
	}

	odd.close();
	even.close();

	return 0;
}
