#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
	if (argc!=3){
		cout << "Usage " << argv[0] << " filename K" << endl;
		return 1;
	}

	fstream file(argv[1], ios_base::in);
    int K=atoi(argv[2]);

	if (!file){
		cout << -1 << endl;
		return -1;
	}

    int t;
    for (--K;;--K){
        file >> t;

        if (!file){
            cout << -1;
            return 0;
        }

        if (K==0){
            cout << "result: " << t;
            return 0;   
        }
    }

	return 0;
}
