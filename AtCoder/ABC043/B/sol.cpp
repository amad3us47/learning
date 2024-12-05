#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
        string str_new;
	getline(cin,str);
	int size=str.length();
	for(int i=0;i<size;i++)
	{
		while(str[i]=='B')
		{
			str[i]=str[i-1];
			cout << str[i];
			str_new=str_new+str[i];
			size--;
		}
	}
	cout << str_new;
}
