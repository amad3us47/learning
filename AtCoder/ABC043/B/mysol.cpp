#include <bits/stdc++.h>
using namespace std;
int main() {

	string s;
	cin >> s;
	for(int i=0;i<=s.length();i++) 
	{
		if(s[i]=='B')
		{
			cout << "";
		}
		else
		{
			if(s[i-1] != 'B')
			{
			cout << s[i-1];
			}
		}
		
	}
}
