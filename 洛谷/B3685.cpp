#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum = 0;
	while(n){
		sum += n%10;
		n/=10;
	}
	cout<<sum<<endl<<sum*sum<<endl<<sum*sum*sum<<endl;
	return 0;
}