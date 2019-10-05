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
	if (argc!=2){
		cout << "Usage " << argv[0] << " filename1" << endl;
		return 1;
	}

    //copy 1 to tmp
    fstream file1(argv[1], ios_base::binary | ios_base::in | ios_base::out);
    fstream tmpfile("newfile", ios_base::trunc | ios_base::out | ios_base::binary | ios_base::in);

    tmpfile << file1.rdbuf();
	
	return 0;
}
