#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct Point{
	double x, y;
	Point(){}
	Point(double x, double y): x(x), y(y){}	
	Point operator +(const Point A){
		Point res;
		res.x = x + A.x;
		res.y = y + A.y;
		return res;
	}
};

istream & operator>>(istream &in, Point &A){
	in>>A.x>>A.y;
	return in;
}

ostream & operator<<(ostream &out, const Point &A){
	out<<"("<<A.x<<","<<A.y<<")";
	return out;
}

double dis(Point A, Point B){
	return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}
double dis(double x1, double y1, double x2, double y2){
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
double Heron(double a, double b, double c){
	double s = (a + b +c) / 2.0;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
	Point A,B,C;
	cin>>A>>B>>C;
	double a,b,c;
	a = dis(A,B);
	b = dis(B,C);
	c = dis(C,A);
	cout<<fixed<<setprecision(0)<<Heron(a,b,c)<<endl;

}
