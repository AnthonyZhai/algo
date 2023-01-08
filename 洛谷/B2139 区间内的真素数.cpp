#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
bool isPrime(int n){
	if(n==1)
		return false;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i == 0)
			return false;
	return true;
}
int getReInt(int n){
	string s = to_string(n);
	reverse(s.begin(), s.end());
	return stoi(s);
}
int main(){
	int M,N;
	vector<int> res;
	cin>>M>>N;
	for(int i=M; i<=N; i++){
		int r = getReInt(i);
		if(isPrime(i) && isPrime(r))
			res.push_back(i);
	}
	if(res.size()==0)
		cout<<"No"<<endl;
	else{
		int i=0;
		for(; i<res.size()-1; i++)
			cout<<res[i]<<',';
		cout<<res[i]<<endl;
	}
}