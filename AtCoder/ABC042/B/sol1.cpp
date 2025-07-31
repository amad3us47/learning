#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l;
	cin >> n >> l;
	std::vector<string> v(n); // size of vector
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
	}
	sort(v.begin(),v.end()); // sorting lexicographically
	for(string x:v)
	{
		cout << x;
	}
	return 0;
}
