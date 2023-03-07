#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long x,z;
	cin>>x>>z;
	double c;
	cin>>c;
	cout<<long(ceil((x-2*z)/c))<<endl;
	return 0;
}