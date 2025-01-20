#include<bits/stdc++.h>
using namespace std;
int main()
{
     int c=0;
     string str;
     cin >> str;
     for(int i=0;i<str.length();i++)
     {
	     for(int j=0;j<str.length();j++)
	     {
		     if(str[i]==str[j])
		     {
			    c++; 
		     }
	     }
}
if(c%2==0)
{
	cout << "Yes";
}
else
        cout << "No";
}
