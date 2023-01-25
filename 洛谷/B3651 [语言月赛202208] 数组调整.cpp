#include <iostream>
using namespace std;
int main(){
	int n, k, a;
	cin>>n>>k;
	long sum=0;
	for(int i=1; i<=n; i++)
	{
		int t;
		cin>>t;
		if(i == k)
			a = t;
		sum += t;
	}
	cout<<sum-2*a;
}