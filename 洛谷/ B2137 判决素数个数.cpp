#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
	if(n == 1)
		return false;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i == 0)
			return false;
	return true;
}
int main(){
	int X,Y,num=0;
	cin>>X>>Y;
	if(X > Y){
		int t = X;
		X = Y;
		Y = t;
	}
	for(int i=X; i<=Y; i++)
		if(isPrime(i))
			num++;
	cout<<num<<endl;
}