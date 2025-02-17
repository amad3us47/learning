#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	std::unordered_set<char> forbidden;
	vector<int> number(k);
	for(int i=0;i<k;i++)
	{
		cin >> number[i];
		forbidden.insert(number[i]+'0');
	}
}
