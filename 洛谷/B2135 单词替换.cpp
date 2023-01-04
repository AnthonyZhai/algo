#include <iostream>
#include <vector>
#include <string>
int main(){
	string s, a, b;
	vector<string> sentence;
	while(cin>>s){
		sentence.push_back(s);
	}
	cin>>a>>b;
	for(string se: sentence){
		if(se == a)
			cout<<b<<" ";
		else
			cout<<se<<" ";
	}
}