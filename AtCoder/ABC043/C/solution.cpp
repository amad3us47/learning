#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum=0;
	vector <int> v(n);
	vector <int> f(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
	}
	// find the middle number between max and min
	sort(v.begin(),v.end());
	int min=v[0];
	int max=v[n-1];
	for(int i=0;i<n;i++)
	{
	   for(int j=min;j<=max;j++)
	   { 
	      int t=v[i]-j;
	      cout << t << endl;
              sum=sum+pow(t,2);
	      f[i]=sum;
	   }
	}
/*	for(int i=0;i<n;i++)
	{
		cout << f[i] << endl;
	} */

}
