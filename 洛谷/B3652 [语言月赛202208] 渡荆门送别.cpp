#include <iostream>
#include <limits>
using namespace std;
int main()
{
	long long int n;
	long long max=numeric_limits<long long int>::min(), min=numeric_limits<long long int>::max();
	cin>>n;
	long long int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max)
			max = a[i];
		if(a[i] < min)
			min = a[i];
	}
	for(int i = 0; i < n; i++)
	{
		cout<<max - a[i]<<" ";
	}
	cout<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<a[i] - min<<" ";
	}
	cout<<endl;

}