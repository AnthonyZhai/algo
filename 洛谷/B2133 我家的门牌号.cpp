#include <iostream>
using namespace std;
int main()
{
	int n, sum=0, i=1;
	cin>>n;
	while(sum < n) //sum - 0 < n
	{
		sum+=i;
		i++;
	}
	bool found = false;
	int my;
	while(!found){
		sum += i;
		my = 1;
		while(my <= i){
			if(sum - 3 * my == n){
				found = true;
				break;
			}
			my++;
		}
		i++;
	}
	cout<<my<<" "<<i-1<<endl;	
}