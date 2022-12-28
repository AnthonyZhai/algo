#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	int k, num;
	cin>>k;
	char c, lastC;
	bool isBreak = false;
	cin.get();
	while((c=cin.get())!='\n'){
		if(lastC == c){
			num++;
			if(num >= k)
			{
				cout<<c;
				isBreak = true;
				break;
			}
		}else{
			lastC = c;
			num = 1;
		}
	}
	if(isBreak == false)
	{
		cout<<"No"<<endl;
	}
}