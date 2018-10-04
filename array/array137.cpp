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
	Point res1;
	Point res2;
	Point res3;
	
	double P_max=DBL_MIN;

	for (int i=0;i<vec1.size();++i){
		for (int j=0;j<vec1.size();++j){
			for (int k=0;k<vec1.size();++k){
				if (i!=j!=k){
					double a=vec1[i].dist(vec1[j]);
					double b=vec1[i].dist(vec1[k]);
					double c=vec1[k].dist(vec1[j]);
					if ((a+b+c)>P_max){
						P_max=a+b+c;
						res1=vec1[i];
						res2=vec1[j];
						res3=vec1[k];
					}
				}
			}
		}
	}

	cout << res1 << res2 << res3 << " P: " << P_max << endl;

	return 0;
}
