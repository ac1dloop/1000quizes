#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
	if (argc!=3){
		cout << "Usage " << argv[0] << " filename1 filename2" << endl;
		return 1;
	}

	fstream file(argv[1], ios_base::in);
	fstream file2(argv[2], ios_base::out);

    istream_iterator<double> it(file);
    vector<double> res;
	for (;file;)
        res.push_back(*it++);

	ostream_iterator<double> out(file2, ", ");

	std::copy(res.begin(), res.begin()+1, out);
	std::copy(res.rbegin(), res.rbegin()+1, out);

	file.close();
	file2.close();

	return 0;
}
