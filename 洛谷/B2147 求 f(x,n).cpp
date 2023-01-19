#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f(int x, int n){
	if(n==1)
		return sqrt(1+x);
	else
		return sqrt(n+f(x, n-1));
}
int main(){
	double x;
	int n;
	cin>>x>>n;
	cout<<setprecision(2)<<fixed<<f(x, n)<<endl;
}