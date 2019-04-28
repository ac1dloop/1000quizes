#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const string disallow="/[],*?.";

int main(int argc, char **argv)
{
	if (argc!=3){
		cout << "Usage " << argv[0] << " filename number" << endl;
		return 1;
	}

	int N=::atoi(argv[2]);
	fstream file(argv[1], ios_base::out);

	if (!file){
		cout << "Cannot create file " << argv[1] << endl;
		return 1;
	}

	for (int i=0;i<N;i+=2){
		file << i << " ";
	}

	file.close();

	return 0;
}
