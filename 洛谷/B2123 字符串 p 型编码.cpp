#include <iostream>
#include <string>
using namespace std;
int main()
{
	string line;
	cin>>line;
	int n=1;
	for(int i=0; i<line.length()-1; i++)
	{
		if(line[i]==line[i+1]){
			n++;
		}
		else{
			cout<<n<<line[i];
			n=1;
		}
	}
	cout<<n<<line[line.length()-1];
}
/*
version2
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string line;
  cin>>line;
  int n=1;
  char c=line[0];
  for(int i=1; i<line.length(); i++)
  {
    if(c==line[i]){
		n++;	
    }else{
		cout<<n<<c;
		n=1;
		c=line[i];	
    }
  }
  cout<<n<<c;
}

version3
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string line;
  cin>>line;
  int n=0;
  char c=line[0];
  for(int i=0; i<line.length(); )
  {
    if(c==line[i]){
    	n++;
		i++;
    }else{
		cout<<n<<c;
		n=0;
		c=line[i];
    }
  }
  cout<<n<<c;
}
*/