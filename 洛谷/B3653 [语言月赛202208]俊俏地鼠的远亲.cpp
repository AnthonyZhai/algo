#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n, m;
	long a[51][51];
	cin>>n>>m;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			cin>>a[i][j];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			int dis = 0;
			for(int k=1; k<=n; k++)
				for(int l=1; l<=m; l++){
					if(a[i][j] == a[k][l]){
						int d = pow(k-i, 2) + pow(l-j, 2);
						if(d > dis)
							dis = d;
					}
				}
			cout<<dis<<" ";
		}
		cout<<"\n";
	}	
}