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

	string name(argv[1]);

	for (auto c: disallow){
		if (name.find(c)!=string::npos){
			cout << "Filename not allowed" << endl;
			return 1;
		}
	}

	fstream file(argv[1], ios_base::out);

	if (!file){
		cout << "Cannot create file " << argv[1] << endl;
		return 1;
	}

	file << "\n";

	file.close();

	return 0;
}