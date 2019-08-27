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
	
	int t;
	vector<int> vec;
	fstream in(argv[1], ios_base::in);

	for (;;){
		in >> t;
		if (!in)
			break;
		vec.push_back(t);
	}
	fstream out1("pos.txt", ios_base::out);
	fstream out2("neg.txt", ios_base::out);

	for (auto it=vec.rbegin();it!=vec.rend();++it){
		if (*it<0)
			out2 << *it << ", ";
		else out1 << *it << ", ";
	}

	in.close();
	out1.close();
	out2.close();

	return 0;
}
