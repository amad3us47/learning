#include<bits/stdc++.h>
using namespace std;
int main(){

	int l,n;
	char c;
	cin>>n;
	cin>>l;
	string words[n];
	string str;
	for(int i=0;i<n;i++) // taking the number of inputs
	{
	cin>>c;
	{
	words[i]=str.append(l,c);
	}
	}
	for(int i=0;i<n;i++)
	{
		cout<<words[i]+"\n";
	}
	return 0;
}

