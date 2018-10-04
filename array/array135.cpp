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
	int n1, n2;
	cin >> n1 >> n2;
	vector<Point> vec1;
	vector<Point> vec2;
	for (int i=0;i<n1;++i){
		Point t;
		cin >> t;
		vec1.push_back(t);
	}

	for (int i=0;i<n2;++i){
		Point t;
		cin >> t;
		vec2.push_back(t);
	}

	double min=DBL_MAX;
	Point res1;
	Point res2;

	for (auto x: vec1){
		for (auto y: vec2){
			double t=x.dist(y);
			if (t<min){
				res1=x;
				res2=y;
			}
		}
	}

	cout << res1 << res2 << "dist: " << min << endl;

	return 0;
}
