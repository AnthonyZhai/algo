#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int p,x0,y0,x1,y1;
	cin>>p>>x0>>y0>>x1>>y1;
	bool beat = false;
	switch(p){
		case 1: beat = (x0 == x1 || y0 == y1)? true : false;break;
		case 2: beat = (x0 == x1 && abs(y0 - y1) > 1 || y0 == y1 && abs(x0 - x1) > 1) ? true : false;break;
		case 3: beat = (abs(x0 - x1) == 2 && abs(y0 - y1) == 1 || abs(x0 - x1) == 1 && abs(y0 - y1) == 2) ? true : false;break;
		case 4: beat = (abs(x0 - x1) == 2 && abs(y0 - y1) == 2) ? true : false;break;
	}
	if(beat)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}