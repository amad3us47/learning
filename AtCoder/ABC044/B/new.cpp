#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin >> s;
 int count = 0 ;
 char ch;
 // cout << s.size(); // gets the length of the string
 for(int i=0;i<s.size();i++)
 {
	 ch=s[i];
	 for(char c:s)
	 {
		 if(ch==c)
		 {
			 count++;
		 }
	 }
		 cout << count;
		 if(count % 2 !=0)
		 {
			 cout << "No";
			 break;

		 }
		 else
		 {
			 cout << "Yes";
		 }
		 count =0;
	 }
 }
