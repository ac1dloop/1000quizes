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

	fstream in(argv[1], std::ios_base::in);
	std::vector<int> vec;
	int tmp;
	for (;;){
		in >> tmp;
		if (!in)
			break;
		vec.push_back(tmp);
	}

	fstream out1("odd.txt", std::ios_base::out);
	fstream out2("even.txt", std::ios_base::out);
	for (auto x: vec){
		x%2==0?(out2 << x << ' '):(out1 << x << ' ');
	}

	in.close();
	out1.close();
	out2.close();

	return 0;
}
