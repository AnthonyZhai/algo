#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int num=0;
	for(int i=2; i<=n; i++)
	{
		bool prime=true;
		for(int j=2; j<=sqrt(i); j++)
		{
			if(i%j==0)
			{
				prime=false;
				break;
			}

		}
		if(prime)
			num++;
	}
	cout<<num<<endl;
	
}