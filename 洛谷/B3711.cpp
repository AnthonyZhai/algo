#include <iostream>
#include <string>
using namespace std;
bool isMulOf4(char ten, char one){
	//1)十位数是奇数且个位数为不是四的倍数的偶数或十位数是偶数且个位数是四的倍数的整数。
	//2)若一个整数的末尾两位数能被4整除，则这个数能被4整除，即是4的倍数。
	if(ten == '1' || ten == '3' || ten == '5' || ten == '7' || ten == '9'){
		if(one == '2' || one == '6')
			return true;
	}
	if(ten == '0' || ten == '2' || ten == '4' || ten == '6' || ten == '8'){
		if(one == '0' || one == '4' || one == '8')
			return true;
	}
	return false;
}
int main()
{
	int T;
	cin>>T;
	for(int i=0; i<T; i++){
		string res = "No";
		string N;
		cin>>N;
		if(isMulOf4(N[N.size()-2], N[N.size()-1]))
			res = "Yes";
		else{
			N.insert(0, "0");
			int len = N.size();
			for(int i=len-1; i>=1; i--){
				if(isMulOf4(N[i-2], N[i-1]) || isMulOf4(N[i-1], N[len-1]))
					res = "Yes";
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
