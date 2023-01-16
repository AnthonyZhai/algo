#include <iostream>
using namespace std;
const char S[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
void convert(int X, int M){
	if(X==0)
		return;
	else{
		convert(X/M, M);
		cout<<S[X%M];
	}
}
int main()
{
	int X, M;
	cin>>X>>M;
	convert(X, M);
}