#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	/* 复制-》翻转-〉比较
	string str1, str2;
	cin>>str1;
	str2 = str1;
	reverse(str2.begin(), str2.end());
	if(str1==str2){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
	*/

	/* 左右两只手
	string str;
	cin>>str;
	int l=str.length();
	int left = 0, right = l - 1;
	while(str[left]==str[right] && !(left == right || left == right + 1))
	{
		left++;
		right--;
	}
	if(left == right || left == right + 1)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	*/

	string str;
	cin>>str;
	int i=0, l=str.length();
	while(str[i]==str[l-1-i] && i<=l/2)
		i++;
	if(i == l/2+1)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
}