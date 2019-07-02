#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
	if (argc!=2){
		cout << "Usage " << argv[0] << " filename" << endl;
		return 1;
	}

	fstream file(argv[1], ios_base::in);

    istream_iterator<int> it(file);
    vector<int> res;
	for (;file;)
        res.push_back(*it++);

    cout << res.at(0) << " " << res.at(1) << " " << res.at(res.size()-2) << " " << res.at(res.size()-1) << endl;

	return 0;
}
