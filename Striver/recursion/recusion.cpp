#include<bits/stdc++.h>
using namespace std;
void printname_n_times(int i,int n)
{
	// TIME COMPLEXITY - O(n)
	if(i>n)
	return ;
		cout << "aman" << endl;
	printname_n_times(i+1,n);
}
void printname_n_times_reverse(int i,int n)
{
	// TIME COMPLEXITY - O(n)
	if(i<1)
	return ;
		cout << i << endl;
	printname_n_times_reverse(i-1,n);
}
void printname_n_times_backtracking(int i,int n)
{
	// TIME COMPLEXITY - O(n)
	if(i<1)
	return;
	printname_n_times(i-1,n);
	cout << i << endl;
}
int main()
{
	printname_n_times(1,3);
	printname_n_times_reverse(3,3);
        printname_n_times_backtracking(4,1);
}
