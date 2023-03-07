#include <iostream>
using namespace std;

int main()
{
	double S;
	cin>>S;
	int num = 0;
	int obj = S * 1e8;
	for(int i=0; i<=100; i++)
		for(int j=0; j<=100; j++)
			for(int k=0; k<=100; k++)
				for(int l=0; l<=100; l++)
					if(i*j*k*l == obj)
						num++;
	cout<<num<<endl;
	return 0;
}