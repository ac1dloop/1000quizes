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
	vector<Point> points;
	for (int i=0;i<n;++i){
		Point t;
		cin >> t;
		points.push_back(t);
	}

	double max=DBL_MIN;
	Point res{0,0};
	for (auto x: points){
		if (x.q()==quarter::II){
			double t=x.dist({0, 0});
			if (t>max){
				max=t;
				res=x;
			}
		}
	}

	cout << res << endl;

	return 0;
}
