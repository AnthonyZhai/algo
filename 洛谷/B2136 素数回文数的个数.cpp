#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
bool isPrime(int n){
	for(int i=2; i<=sqrt(n); i++)
		if(n%i == 0)
			return false;
	return true;
}
bool isHuiWen(int n){
	string s = to_string(n);
	string t = s;
	reverse(t.begin(), t.end());
	return s == t;
}
int main()
{
	int n, num = 0;
	cin>>n;
	for(int i=11; i<=n; i++)
		if(isPrime(i) && isHuiWen(i))
			num++;
	cout<<num<<endl;
}