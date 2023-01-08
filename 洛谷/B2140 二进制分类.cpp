#include <iostream>
using namespace std;
int main()
{
	int n, numA=0, numB=0;
	cin>>n;
	for(int i=1; i<=n; i++){

		int ii = i,num01=0, num1=0;
		while(ii){
			num01++;
			if(ii & 1)
				num1++;
			ii>>=1;
		}
		if(num1 > num01 - num1)
			numA++;
		else
			numB++;
	}
	cout<<numA<<" "<<numB<<endl;
}