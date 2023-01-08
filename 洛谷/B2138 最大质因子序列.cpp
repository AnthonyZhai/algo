#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
	if(n==1)
		return false;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i == 0)
			return false;
	return true;
}
int main(){
	int m,n, arr[5000]={0};
	cin>>m>>n;
	for(int i=m; i<=n; i++)
		if(isPrime(i))
			arr[i]=i;
	for(int i=m; i<=n; i++)
		if(arr[i]==0)
			for(int j=i/2; j>=2; j--)
				if(i%j==0 && isPrime(j)){
					arr[i]=j;
					break;
				}
	for(int i=m; i<n; i++)
		cout<<arr[i]<<',';
	cout<<arr[n]<<endl;
}