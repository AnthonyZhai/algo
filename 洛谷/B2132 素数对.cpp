#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int x){
	for(int i=2; i<=sqrt(x); i++)
		if(x%i == 0)
			return false;
	return true;
}
int main()
{
	int n;
	cin>>n;
	bool hasPrimePair = false;
	for(int i=3; i<=n; i+=2)
	{
		if(isPrime(i) && i+2 <= n && isPrime(i+2)){
			cout<<i<<" "<<i+2<<endl;
			hasPrimePair = true;
		}
	}
	if(!hasPrimePair)
		cout<<"empty"<<endl;
}