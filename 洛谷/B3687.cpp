#include <iostream>
using namespace std;
int main()
{
	int n, i=1, s=0;
	cin>>n;
	while(s+i<=n)
	{
		s+=i;
		cout<<i++<<endl;
	}

}