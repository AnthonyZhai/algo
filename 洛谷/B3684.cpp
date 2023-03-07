#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	if(x<y)
		cout<<"YES"<<endl;
	else if(x>y)
		cout<<"No"<<endl;
	else
		cout<<"equal probability"<<endl;
	return 0;
}