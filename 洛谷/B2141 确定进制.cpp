#include <iostream>
#include <cmath>
using namespace std;
long getSum(string s, int B){
	long sum=0;
	int n = s.size();
	for(int i=0; i<n; i++)
		sum += ((s[i] - '0') * pow(B, n-i-1));
	return sum;
}
int main(){
	int p,q,r;
	cin>>p>>q>>r;
	string p_s, q_s, r_s;
	p_s = to_string(p);
	q_s = to_string(q);
	r_s = to_string(r);
	int B = 2;
	for(auto e:p_s)
		if(e-'0' > B)
			B = e-'0';
	for(auto e:q_s)
		if(e-'0' > B)
			B = e-'0';
	for(auto e:r_s)
		if(e-'0' > B)
			B = e-'0';
	B++;
	while(B<=16){
		long sum_p = getSum(p_s, B);
		long sum_q = getSum(q_s, B);
		long sum_r = getSum(r_s, B);
		if(sum_p * sum_q == sum_r)
			break;
		B++;
	}
	if(B>16)
		cout<<0<<endl;
	else
		cout<<B<<endl;
	
}