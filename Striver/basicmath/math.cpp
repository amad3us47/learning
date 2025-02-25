#include<bits/stdc++.h>
using namespace std;
void extractionofdigits(int n)
{
         // 7789 % 10 = 9 extraction of digits
	 // 7789 / 10 = 778.9 if we take data type as int then 778
	 // 778 % 10 = 8 
	 // 778/10 = 778/10 = 77.8 int part is 77
	 // 77 %10 = 7 
	 // 77 /10 = 7.7
	 // 7 % 10 = 7
	 // 7 /10 = 0.0 something so end its 0
	 //
	 // 9877
	 
	 while(n > 0)
	 {
		 int d=n%10;
		 std::cout << d << endl;
                 n=n/10;
	 }
}
void countdigits(int n)
{
	int c=0;
        while(n > 0)
	 {
		 int d=n%10;
		 c++;
                 n=n/10;
	 }
         printf("%d",c);

	 // another way 
	 // int cnt = (int)(log10(n)+1);
	 // TIME COMPLEXITY -> O(log10(n))
	 // if you are dividing then time complexity will be logarithmic
}
void reverseanumber(int n)
{
	// 7789 -> 9877
	// revnum=(revnum*10) + d;
	// (0 x 10) + 9=9
	// (9 x 10) + 8=98
	// (98 x 10)+ 7=987
	// (987 x 10)+ 7=9877
	int revnum;
        while(n > 0)
	{
		int d=n%10;
		revnum=(revnum*10) + d;
		n=n/10;
	}
       cout << revnum ;
}
void Palindrome(int n)
{
	// store the duplicate of n as the n becomes 0 in the end of the iteration
	int revnum;
	int t=n;
        while(n > 0)
	{
		int d=n%10;
		revnum=(revnum*10) + d;
		n=n/10;
	}
        if(revnum==t)
	{
		cout << "True" ;
	}
	else
		cout << "False";
}
void armstrong(int n)
{
	// 131 
	// 1*1*1 + 3*3*3 + 1*1*1 = 131
	int sum=0;
        while(n > 0)
	{
		int d=n%10;
		sum=sum + (d*d*d);
		n=n/10;
	}
        cout << sum;
}
void printalldivisors(int n)
{
	// divisors or factors
	// 36 -> 1,2,3,4,6,9,12,18,36
	// all the divisors will be between 1 to n
	// TIME COMPLEXITY -> O(n)
	// too large complexity 
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout << i << ";" ;
		}
	}
	// optimising for time complexity
	// 
	// 1 x 36
	// 2 x 18
	// 3 x 12
	// 4 
}
int main()
{
	extractionofdigits(9999);
	countdigits(888);
	reverseanumber(787432);
	Palindrome(788);
	printalldivisors(36);
}


























