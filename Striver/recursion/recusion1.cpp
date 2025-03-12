#include<bits/stdc++.h>
using namespace std;
void sumoffirstnnums(int n,int sum)
{
	if(n<1)
	{
		cout << sum << endl;
		return;
	}
	 sumoffirstnnums(n-1,sum+n);
}
int sumoffirstnnums1(int n)
{
	if(n==0)
	{
		return 0;
	}
	 return n +sumoffirstnnums1(n-1);
}
int muloffirstnnums(int n)
{
	if(n==0)
	{
		return 1;
	}
	 return n*muloffirstnnums(n-1);
}
int main()
{
      sumoffirstnnums(5,0);
      int x=3;
      cout << muloffirstnnums(x);
}
