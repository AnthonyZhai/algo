#include <iostream>
#include <string>
using namespace std;
int main()
{
	int N = 100;
	int scores[N];
	string names[N];
	int n, max=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>scores[i]>>names[i];
		if(scores[i] >= scores[max])
			max = i;
	}
	cout<<names[max]<<endl;
}
/*
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b){
	return a.second < b.second;
}
int main()
{
	map<string, int> lists;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int score;
		string name;
		cin>>score>>name;
		lists[name] = score;
	}
	auto pos = max_element(lists.begin(), lists.end(), cmp);
	cout<<pos->first<<endl;
}
*/
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> scores;
	vector<string> names;
	int n, i=0, max=0;
	cin>>n;
	while(i<n){
		int s;
		string name;
		cin>>s>>name;
		scores.push_back(s);
		names.push_back(name);
		if(s > scores[max])
			max = i;
		i++;
	}
	cout<<names[max]<<endl;

}
*/