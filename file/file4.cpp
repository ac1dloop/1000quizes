#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const string disallow="/[],*?.";

inline bool exists_test0 (const std::string& name) {
    ifstream f(name.c_str());
    return f.good();
}

int main(int argc, char **argv)
{
	if (argc!=5){
		cout << "Usage " << argv[0] << " filename1 filename2 filename3 filename4" << endl;
		return 1;
	}

	int res=0;
	for (int i=1;i<5;++i){
		if (exists_test0(argv[i]))
			++res;
	}

	cout << "res: " << res << endl;

	return 0;
}
