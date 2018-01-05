#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <time.h>

using namespace std;

void powa3(int a,int &b){
  b=a*a*a;
}

void powa234(int a, int &b, int &c, int &d){
  b=a*a;
  c=a*a*a;
  d=a*a*a*a;
}

void mean(double x,double y,double &am,double &gm){
  am=(x+y)/2;
  gm=sqrt(x*y);
}

void triangleps(double a, double &p, double &s){
  p=3*a;
  s=a*a*sqrt(3)/4;
}

void digitcountsum(int k,int &c,int &s){
	int i;
	for (i=0;k!=0;i++){
		s+=k%10;
		k/=10;
	}
	c=i;
}

void invdigits(int &k){
	int i=0;
	int t=k;
	for (i=0;t!=0;i++)
		t/=10;
	t=0;
	for (;k!=0;i--){
		t+=k%10*pow(10,i-1);
		k/=10;
	}
	k=t;
}

void addrightdigit(int &d, int k){
	d*=10;
	d+=k;
}

void addleftdigit(int &d, int k){
	int a=10;
	for (;a<d;a*=10)
	;
	a*=k;
	a+=d;
	d=a;
}

void swap(int &x, int &y){
	int t=x;
	x=y;
	y=t;
}

void minmax(int &x,int &y){
	y=y>x?y:x;
	x=x<y?x:y;
}

void sortinc3(int &a, int &b, int &c){
	int min,max;
	min=(a<b?a:b)<c?(a<b?a:b):c;
	max=(a<b?b:a)<c?c:(a<b?b:a);
	b=(a!=min&&a!=max?a:(b!=min&&b!=max?b:c));
	a=min;
	c=max;
}

void sortdec3(int &a, int &b, int &c){
	int min,max;
	min=(a<b?a:b)<c?(a<b?a:b):c;
	max=(a<b?b:a)<c?c:(a<b?b:a);
	b=(a!=min&&a!=max?a:(b!=min&&b!=max?b:c));
	a=max;
	c=min;
}

void shiftright3(int &a, int &b, int &c){
	int t=c;
	c=b;
	b=a;
	a=t;
}

void shiftleft3(int &a, int &b, int &c){
	int t=a;
	a=b;
	b=c;
	c=t;
}

int sign(double &x){
	if (x<0){
		return -1;
	} else if (x>0){
		return 1;
	} else {
		return 0;
	}
}

int rootcount(double &a,double &b,double &c){
	double d=b*b-4*a*c;
	if (d<0){
		return 0;
	} else if (d==0){
		return 1;
	} else {
		return 2;
	}
}

double circleS(double r){
	return 3.14*r*r;
}

double ringS(double &r1,double &r2){
	return 3.14*r1*r1-3.14*r2*r2;
}

double triangleph(double &a, double &h){
	double b=sqrt(a*a/4+h*h);
	return 2*b+a;
}

int sumrange(int &a, int &b){
	int s=0;
	for (int i=a;i<=b;i++){
		s+=i;
	}
	return s;
}

double calc(double &a,double &b, int op){
	switch(op){
		case 1:
			return a-b;
			break;
		case 2:
			return a*b;
			break;
		case 3:
			return a/b;
			break;
		default:
			return a+b;
			break;
		}
}

int quarter(double &x,double &y){
	if (x>0&&y>0)
		return 1;
	if (x<0&&y>0)
		return 2;
	if (x<0&&y<0)
		return 3;
	if (x>0&&y<0)
		return 4;
}

bool even(int &k){
	if (k%2==0)
		return true;
	return false;
}

bool issquare(int &k){
	for (int i=1;i<=sqrt(k);i++)
		if(sqrt(k)==i){
			return true;
		}
	return false;
}

bool issquare5(int &k){
	for (int i=5;i<=k/2;i+=5)
		if (sqrt(k)==i){
			return true;
		}
	return false;
}

bool ispowern(int &k,int n){
	for (int i=n;i<=k/2;i+=n){
		if (sqrt(k)==i){
			return true;
		}
	}
	return false;
}

bool isprime(int &k){
	for (int i=2;i<k;i++){
		if (k%i==0){
			return false;
		}
	}
	return true;
}

int digitcount(int &k){
	int i;
	for (i=0;k!=0;i++){
		k/=10;
	}
	return i;
}

int digitn(int k,int n){
	int t=k;
	int i;
	for (i=0;t!=0;i++)
		t/=10;
	if (n>i)
		return -1;
	else {
		i=i-n;
		for (int j=0;j<i;j++)
			k/=10;
	}
	return k%10;
}

bool ispalindrome(int k){
	int c=0;
	int a=k;
	for (c=0;a!=0;c++)
		a/=10;
	a=k;
	int t=0;
	for (int i=pow(10,c-1);a!=0;i/=10){
		t+=a%10*i;
		a/=10;
	}
	if (t==k){
		return true;
	} else return false;
}

double degtorad(double &d){
	return 3.14*d/180;
}

double radtodeg(double &r){
	return r*180/3.14;
}

unsigned long long fact(int n){
	n=(unsigned long long)n;
	return n==1?n:n*(fact(n-1));
}

unsigned long long fact2(int n){
	n=(unsigned long long)n;
	if (n%2!=0){
		for (int i=1;i<n;i+=2)
			n*=i;
	} else {
		for (int i=2;i<n;i+=2)
			n*=i;
	}
	return n;
}

unsigned long long fib(int n){
	n=(unsigned long long)n;
	int a=1;
	int b=1;
	int c;
	for (int i=3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}

double power1(double &a,int &b){
	if (a==0||a<=0){
		return 0;
	} else return exp(b*log(a));
}

double power2(double a,int &n){
	if (n==0){
		return 1;
	} else if (n<0){
		for (int i=1;i<abs(n);i++)
			a*=a;
		return 1/a;
	} else {
		for (int i=1;i<n;i++)
			a*=a;
		return a;
	}
}

double power3(double a,int &n){
	if (a-floor(a)==0){
		return power2(a,n);
	} else return power1(a,n);
}

double exp1(double x, double &e){
	double s=1,r;
	r=x;
	for (int i=2;r>=e;i++){
		s+=r;
		r=pow(x,i)/fact(i);
	}
	return s;
}

double sin1(double x, double &e){
	double s=0,r;
	r=x;
	for (int i=1;i<=25;i+=2){
		r=pow(x,i)/fact(i);
		r*=pow(-1,i);
		if (abs(r)>e)
			s+=r;
	}
	return s;
}

double cos1(double x, double &e){
	double s=1,r;
	r=x;
	for (int i=2;i<=25;i+=2){
		r=pow(x,i)/fact(i);
		r*=pow(-1,i);
		if (abs(r)>e)
			s-=r;
	}
	return s;
}

double ln1(double x,double &e){
	double s=0,r;
	r=x;
	for (int i=2;i<=26;i++){
		//if (abs(r)>=e)
			s+=r;
		r=pow(x,i)/i;
		r*=-1;
	}
	return s;
}

double arctg1(double x,double &e){
	double s=0,r;
	r=x;
	for (int i=3;i<=26;i++){
		s+=r;
		r=pow(x,i)/i;
		r*=-1;
	}
	return s;
}

double power4(double x,double a,double &e){
	double s=1,r;
	for (int i=1;i<=10;i++){
		r=(pow(x,i)*a)/fact(i);
		a*=a-1;
		s+=r;
	}
	return s;
}

int gcd2(int a,int b){
	if (b==0)
		return a;
	else return gcd2(b, a%b);
}

void frac1(int a,int b,int &p,int &q){
	p=gcd2(a,b);
	q=p+1;
}

int lcm2(int a,int b){
	return a*(b/gcd2(a,b));
}

int gcd3(int a,int b,int c){
	return gcd2(gcd2(a,b),c);
}

void timetoHMS(int t,int &h,int &m,int &s){
	h=t/60/60;
	t=t%60%60;
	m=t/60;
	t%=60;
	s=t;
}

void inctime(int t,int &h,int &m,int &s){
	h+=t/60/60;
	t=t%60%60;
	m=+t/60;
	t%=60;
	s+=t;
}

bool isleapy(int y){
	if (y%100==0&&y%400!=0){
		return false;
	} else if (y%4==0){
		return true;
	} else return false;
}



int main()
{
	time_t secs;
	secs=time(NULL);
	int h;
	int m;
	int s;
	timetoHMS(secs,h,m,s);
	cout << h << " " << m << " " << s;
}
