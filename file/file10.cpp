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

	fstream file(argv[1], std::ios_base::in);

	vector<int> vec;
	int t;
	for (;;){
		file >> t;
		if (!file)
			break;

		vec.push_back(t);
	}

	file.close();

	file.open("newfile.out", std::ios_base::out);

	std::reverse(vec.begin(), vec.end());	
	cout << "vec size: " << vec.size() << '\n';
	for (int i=0;i<vec.size();++i){
		file << vec[i] << ", ";
	}

	file.close();

	return 0;
}
