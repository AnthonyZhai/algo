#include <iostream>
using namespace std;
int h(int x, int n){
	if(n == 0)
		return 1;
	else if(n == 1)
		return 2*x;
	else{
		return 2*x*h(x, n-1) - 2*(n-1)*h(x, n-2);
	}
}
int main()
{
	int n,x;
	cin>>n>>x;
	cout<<h(x, n)<<endl;
}