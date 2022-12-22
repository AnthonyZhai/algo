#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string word;
	while(cin>>word)
	{
		reverse(word.begin(), word.end());
		cout<<word<<endl;
	}
}