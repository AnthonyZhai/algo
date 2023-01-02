#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, i=0, num=0;
	cin>>n;
	while(i < n){
		string name;
		double temp;
		int cough;
		cin>>name>>temp>>cough;
		if(temp >= 37.5 && cough){
			cout<<name<<endl;
			num++;
		}
		i++;	
	}	
	cout<<num<<endl;
}