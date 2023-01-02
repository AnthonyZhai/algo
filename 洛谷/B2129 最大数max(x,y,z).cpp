#include <iostream>
#include <iomanip>
using namespace std;
int max(int a, int b, int c){
	return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b: c); 
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	double m=double(max(a,b,c))/(max(a+b,b,c)*max(a,b,b+c));
	cout<<fixed<<setprecision(3)<<m<<endl;
}