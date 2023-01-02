#include <iostream>
using namespace std;
int main(){
	char c, op;
	int a=0, b=0;
	while((c=cin.get()) != '\n' && c>='0' && c<='9') a=a*10+(c-'0');
	while(c==' ' && (c=cin.get()) == '\n');
	op = c;
	while((c=cin.get()) == '\n' && c==' ');
	b=b*10+(c-'0');
	while((c=cin.get())!='\n' && c>='0' && c<='9') b=b*10+(c-'0');
	switch(op){
		case '+':cout<<a+b<<endl;break;
		case '-':cout<<a-b<<endl;break;
		case '*':cout<<a*b<<endl;break;
		case '/':cout<<(b!=0?a/b:0)<<endl;break;
		case '%':cout<<a%b<<endl;break;
	}
}