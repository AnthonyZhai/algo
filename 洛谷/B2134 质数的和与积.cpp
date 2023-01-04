#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int x){
	for(int i=2; i<=sqrt(x); i++)
		if(x%i==0)
			return false;
	return true;
}
int main(){
	int S;
	cin>>S;
	int i = S/2;
	while(!(isPrime(i) && isPrime(S-i))){
		i++;
	}
	cout<<i*(S-i)<<endl;
}