#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p[n];
	for(int i=0; i<n; i++)
		cin>>p[i];
	int s = 0, e=n-1;
	do{
		s = (s-1+n)%n;
		e = (e-1+n)%n;
		int i=s;
		while(i!=e)
		{
			cout<<p[i]<<" ";
			i=(i+1)%n;
		}
		cout<<p[i]<<endl;
	}while(p[e]!=n);
	return 0;
}