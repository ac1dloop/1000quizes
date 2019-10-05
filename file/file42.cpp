#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>
#include <cstdio>

using namespace std;

int main(int argc, char **argv)
{
	if (argc!=3){
		cout << "Usage " << argv[0] << " filename1 filename2" << endl;
		return 1;
	}

    char tmp[L_tmpnam];

    //copy 1 to tmp
    fstream file1(argv[1], ios_base::binary | ios_base::in | ios_base::out);
    fstream tmpfile(tmp, ios_base::trunc | ios_base::out | ios_base::binary | ios_base::in);

    tmpfile << file1.rdbuf();

    //copy 2 to 1
    fstream file2(argv[2], ios_base::in | ios_base::binary | ios_base::out);
    file1.open(argv[2], ios_base::trunc | ios_base::in | ios_base::binary);

    file1 << file2.rdbuf();

    //copy tmp to 2
    file2.open(argv[2], ios_base::trunc | ios_base::in | ios_base::binary);

    file2 << tmpfile.rdbuf();

    remove(tmp);
	
	return 0;
}
