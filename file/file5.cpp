#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const string disallow="/[],*?.";

int main(int argc, char **argv)
{
	if (argc!=2){
		cout << "Usage " << argv[0] << " filename" << endl;
		return 1;
	}

	fstream file(argv[1], ios_base::in);

	if (!file){
		cout << -1 << endl;
		return -1;
	}

	int a;
	size_t i;
	for (i=0;file >> a;++i);

	cout << "res: " <<  i << endl;

	return 0;
}
