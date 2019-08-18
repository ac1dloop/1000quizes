#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

void writeFile(fstream& f, fstream& out){
	vector<double> vec;
	double tmp;
	for (;f;){
		f >> tmp;
		vec.push_back(tmp);
	}

	out << vec[0] << ' ' <<  vec[vec.size()-1];
}

int main(int argc, char **argv)
{
	if (argc!=3){
		cout << "Usage " << argv[0] << " filename1 filename2" << endl;
		return 1;
	}

	fstream f1(argv[1], ios_base::in);
	fstream f2(argv[2], ios_base::in);

	if (f1){
		f2.close();
		f2.open(argv[2], ios_base::out);
		writeFile(f1, f2);
	} else {
		f1.close();
		f1.open(argv[1], ios_base::out);
		writeFile(f2, f1);
	}

	f1.close();
	f2.close();

	return 0;
}
