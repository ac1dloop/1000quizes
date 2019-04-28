#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const string disallow="/[],*?.";

int main(int argc, char **argv)
{
	if (argc!=4){
		cout << "Usage " << argv[0] << " filename number1 number2" << endl;
		return 1;
	}

	int A=::atoi(argv[2]);
	int D=::atoi(argv[3]);
	fstream file(argv[1], ios_base::out);

	if (!file){
		cout << "Cannot create file " << argv[1] << endl;
		return 1;
	}

	for (int i=0;i<10;++i){
		file << A+i*D << " ";
	}

	file.close();

	return 0;
}
