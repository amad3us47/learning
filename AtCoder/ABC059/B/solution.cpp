#include <bits/stdc++.h>
using namespace std;
void solution(long long m, long long n)
{
        if(n<<m)
	{
		cout << "LESS";
	}
	else if(n>>m)
	{
		cout << "LESS";
	}
	else
	{
		cout << "EQUAL";
}
}
int main()
{
	solution(9720246,22516266);
}
