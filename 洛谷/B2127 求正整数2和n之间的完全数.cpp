#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=2; i<n; i++)
	{
		int sum=0;
		for(int j=2; j<=sqrt(i); j++)
		{
			if(i%j==0){
				if(j != i/j){
					sum+=j;
					sum+=(i/j);
				}
				else{
					sum+=j;
				}
				
			}
		}
		if(sum+1 == i)
			cout<<i<<endl;
	}
	
}