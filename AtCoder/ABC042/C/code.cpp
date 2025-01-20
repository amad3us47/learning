#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	string final;
	cin >> n >> k;
	string s=to_string(n);
	//cout << s[0];
	vector<int> v(k);
	vector<int> m(9);
	for(int i=0;i<k;i++)
	{
		cin >> v[i];
	}
	sort(v.begin(),v.end()); // sorting the vector for fast calculation 
	
        //missing number should be max number
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<k;j++)
		{
			if(i!=v[k])
			{
				cout << i;
			}
		}
	}

	cout << "============" ;


	for(int i=0;i<s.length();i++)
	{
		for(int j=0;j<k;j++)
		{
			if(s[i] != v[i])
			{
				final = final + s[i];
			}
		}
	}
	cout << final ;
	return 0;
}

// problem lies in getting the smallest number missing in the vector
