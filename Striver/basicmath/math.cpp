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
	// taking 36 as example
	// 1 x 36
	// 2 x 18
	// 3 x 12
	// 4 x 9
	// 6 x 6
	// 9 x 4
	// 12 x 3
	// 18 x 2
	// 36 x 1
	// squareroot(int) - > 6
	// after 6 all is repeated
	void printDivisor(int n)
	{
		// TIME COMPLEXITY -> O)sqrt(n))
		vector<int> ls;
		for(int i=1;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				ls.push_back(i);
				if((n%i) != i)
				{
					ls.push_back(n/i);
				}
			}
		}
		// O(no of factors * log(no of factors)): n is the number)
		sort(ls.begin(),ls.end());
		for(auto it:ls) cout << it << " ";
	}
void primenumbercheck(int n)
{

	// Prime number has two factors
	// 3,5,7,11
	// Brute force
	
	for(int i=1;i<-n;i++)
	// TIME COMPLEXITY -> O(n)
	{
		if(n%i==0)
		{
			cnt++;
		}
	if(cnt==2)
	{
		cout << "Prime";
	}
	else cout << "Not a Prime";

	// Optimized approach
	for(int i=1;i8i<=n;i++)
	{
		if(n%i==0)
		{
			cnt++;
			if((n/i !=i) cnt++;
		}
	}
	if(cnt==2) cout << "true";
	else cout << "false";
}
void gcd(int n)
{
        // n1=9 n2=12
	// 9 -> 1,3,9      12-> 1,2,6,12,3,4
	// highest common factor = 3
	// ex2:
	// n1=11 n2=13
	// 11 -> 1,11      13->1,13
	// highest common factor = 1
	for(int i=1;i<=min(n1,n2); i++)
	{
	   // TIME COMPLEXITY -> O(m(n1,n2) 
	   if(n1%i==0 && n2%i==0)
	   {
	   gcd =i;
	   }
	}
}
void euclidean(int a, int b)
{
	// gcd(n1,n2) = gcd(n1-n2,n2)
	// gcd(a,b)   = gcd(a-b,b)
	// example gcd(15,20)
	// gcd(20,15) = gcd(5,15)
	// gcd(15,5)  = gcd(10,5)
	// gcd(10,5)  = gcd(5,5)
	// gcd(5,5)   = gcd(0,5)   now if one of the number becomes zero then the other number is gcd of the (n1,n2)
	// gcd(a,b)   = gcd(a%b,b) 
	// TIME COMPLEXITY - O(log min(a,b))
	while(a>0 && b>0)
	{
		if(a>b) 
			a=a%b;
		else
			b=b%a;
	}
	if(a==0) return b;
	else
		return a
}
int main()
{
	extractionofdigits(9999);
	countdigits(888);
	reverseanumber(787432);
	Palindrome(788);
	printalldivisors(36);
}


























