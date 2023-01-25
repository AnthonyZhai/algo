#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
bool latern[1001]={false};
int main(){
	int n,m, i=0;
	cin>>n>>m;
	while(i < m)
	{
		int t;
		cin>>t;
		// t-1=0->n; t+1=n+1->1
		/*
		if(t == 1)
		{
			latern[n]=!latern[n];
			latern[1]=!latern[1];
			latern[2]=!latern[2];
		}
		else if(t == n){
			latern[n-1]=!latern[n-1];
			latern[n]=!latern[n];
			latern[1]=!latern[1];
		}
		else{
			latern[t-1]=!latern[t-1];
			latern[t]=!latern[t];
			latern[t+1]=!latern[t+1];
		}
		*/
		t %= n;
		latern[(t-1+n)%n] = !latern[(t-1+n)%n];
		latern[t%n] = !latern[t%n];
		latern[(t+1+n)%n] = !latern[(t+1+n)%n];
		i++;

	}
	for(int j=1; j<n; j++)
		cout<<latern[j]<<" ";
	cout<<latern[0]<<endl;
}
