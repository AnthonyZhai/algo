#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
	string line, maxWord, minWord, word;
	getline(cin, line);
	for(int i=0; i<line.length(); i++)
		if(line[i]==',' || line[i]=='.')
			line[i]=' ';
	stringstream s(line);
	maxWord = " ";
	minWord = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	while(s >> word)
	{
		if(word.length() > maxWord.length())
			maxWord = word;
		if(word.length() < minWord.length())
			minWord = word;
	}
	cout<<maxWord<<endl;
	cout<<minWord<<endl;

}