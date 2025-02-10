#include<bits/stdc++.h>
using namespace std;
int main()
{
     int c,j;
     string str;
     cin >> str;
     vector<string> d(15);
     vector<string> v(str.length());
     for(int i=0;i<str.length();i++)
     {
         v[i]=str[i];
     }

     sort(v.begin(),v.end());
      
     //unique(v.begin(),v.end()+1);

     for(int i=0;i<str.length();i++)
     {
	cout << v[i];     
     }
}
