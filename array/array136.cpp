#include <iostream>
#include <vector>
#include <cfloat>
#include <cmath>

enum class quarter{
	I,
	II,
	III,
	IV
};

struct Point{
	Point(){}
	Point(double a, double b):x(a),y(b){  }
	quarter q(){
		if (x>0&&y>0)
			return quarter::I;
		else if (x<0&&y>0)
			return quarter::II;
		else if (x<0&&y<0)
			return quarter::III;
		else return quarter::IV;
	}
	double x;
	double y;
	double dist(const Point& op2) { return sqrt((x-op2.x)*(x-op2.x)+(y-op2.y)*(y-op2.y)); }
};


std::istream& operator >>(std::istream &is, Point &p)
{
	is >> p.x >> p.y;
	return is;
}

std::ostream& operator <<(std::ostream &os, Point &p)
{
	os << "(" << p.x << "," << p.y << ")";
	return os;
}

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<Point> vec1;
	for (int i=0;i<n;++i){
		Point t;
		cin >> t;
		vec1.push_back(t);
	}
	
	double min=DBL_MAX;
	Point res;

	for (int i=0;i<vec1.size();++i){
		double sum=0;
		for (int j=0;j<vec1.size();++j){
			if (j!=i){
				double t=vec1[i].dist(vec1[j]);
				sum+=t;
			}
		}
		if (sum<min){
			min=sum;
			res=vec1[i];
		}
	}

	cout << res << "dist: " << min << endl;

	return 0;
}
