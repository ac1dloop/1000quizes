#include <iostream>
#include <vector>
#include <cfloat>
#include <cmath>

struct Point{
	double x;
	double y;
};

using namespace std;

int main()
{
	Point a, tmp;
	int n;
	vector<Point> vec;
	cin >> n;
	cin >> a.x >> a.y;
	for (int i=0;i<n;++i){
		cin >> tmp.x >> tmp.y;
		vec.push_back(tmp);
	}

	double min=DBL_MAX;
	Point res;
	for (auto n: vec){
		double dist=sqrt((n.x-a.x)*(n.x-a.x)+(n.y-a.y)*(n.y-a.y));
		dist=std::abs(dist);
		if (dist<min){
			min=dist;
			res=n;
		}
	}

	cout << "(" << res.x << "," << res.y << ")" << endl;
		

	return 0;
}
