#include<iostream>
using namespace std;
int pattern1()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("*");
		}
		cout << " " << endl;
	}
}
int pattern2()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			printf("*");
		}
		cout << " " << endl;
	}
}
int pattern3()
{
	for(int i=1;i<6;i++)
	{
		for(int j=1;j<i+1;j++)
		{
			printf("%d",j);
		}
		cout << " " << endl;
	}
}
int pattern4()
{
	for(int i=1;i<6;i++)
	{
		for(int j=1;j<i+1;j++)
		{
			printf("%d",i);
		}
		cout << " " << endl;
	}
}
int pattern5()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4-i+1;j++)
		{
			printf("*");
		}
		cout << " " << endl;
	}
}
int pattern6()
{
	for(int i=1;i<6;i++)
	{
		for(int j=1;j<6-i+1;j++)
		{
			printf("%d",j);
		}
		cout << " " << endl;
	}
}
int pattern7()
{
	for(int i=0;i<5;i++)
	{
		// space
		for(int j=0;j<6-i-1;j++)
		{
                  cout << " ";
		}

		// star
		for(int j=0;j<2*i+1;j++)
		{
                 printf("*");
		}

		//space
		for(int j=0;j<6-i-1;j++)
		{
                  printf(" ");
		}

		cout << endl;

	}
}
int pattern8()
{
	for(int i=0;i<5;i++)
	{
		// space
		for(int j=0;j<i;j++)
		{
                  cout << " ";
		}

		// star
		for(int j=0;j<9-2*i;j++)
		{
                 printf("*");
		}

		//space
		for(int j=0;j<i;j++)
		{
                  printf(" ");
		}

		cout << endl;

	}
}
int pattern9()
{
	for(int i=0;i<5;i++)
	{
		// space
		for(int j=0;j<6-i-1;j++)
		{
                  cout << " ";
		}

		// star
		for(int j=0;j<2*i+1;j++)
		{
                 printf("*");
		}

		//space
		for(int j=0;j<6-i-1;j++)
		{
                  printf(" ");
		}

		cout << endl;

	}
	for(int i=0;i<5;i++)
	{
		// space
		for(int j=0;j<i+1;j++)
		{
                  cout << " ";
		}

		// star
		for(int j=0;j<9-2*i;j++)
		{
                 printf("*");
		}

		//space
		for(int j=0;j<i+1;j++)
		{
                  printf(" ");
		}

		cout << endl;

	}
}
int pattern10()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			cout << "*" ;
		}
		cout << endl;
	}
        for(int i=0;i<5;i++)
	{
		for(int j=0;j<5-i;j++)
		{
			cout << "*" ;
		}
		cout << endl;
	}
}
int pattern11()
{
	int start;
	for(int i=0;i<5;i++)
	{
		if(i%2==0) 
		{
			start =1;
		}
		else 
		{
			start =0;
		}
		for(int j=0;j<i;j++)
		{
			cout << start ;
			start=1-start;
		}
		cout << endl;
	}

}
int pattern12()
{
	for(int i=0;i<5;i++)
	{
		// number
		for(int j=1;j<i+1;j++)
		{
                  cout << j;
		}

		// star
		for(int j=0;j<8-2*i;j++)
		{
                 printf(" ");
		}

		// number
		for(int j=i;j>=1;j--)
		{
                  cout << j;
		}

		cout << endl;

	}
}
int pattern13()
{ 
	int num=1;
	for(int i=0;i<5;i++)
	{
          for(int j=0;j<i;j++)
	  {  
             cout << num;
	     num=num+1;
	  } 
	  cout << endl;
	}
}
int pattern14()
{
	for(int i=0;i<6;i++)
	{
          for(char ch='A';ch< 'A'+i;ch++)
	  {  
             cout << ch;
	  } 
	  cout << endl;
	}
}
int pattern15()
{
	for(int i=0;i<7;i++)
	{
          for(char ch='A';ch<'E'-i;ch++)
	  {  
             cout << ch;
	  } 
	  cout << endl;
	}
}
int pattern16()
{;
	for(int i=0;i<5;i++)
	{
	  char ch='A'+i;
          for(int j=0;j<i;j++)
	  {  
           cout << ch << " ";
	  } 
	  cout << endl;
	}
}
int pattern17()
{
	for(int i=0;i<5;i++)
	{
		// space
		for(int j=0;j<4-i;j++)
		{
                  cout << " " ;
		}

		// character
		for(char ch='A';ch<'A'+i;ch++)
		{
                  cout << ch ;
		}

		// space
		for(int j=i;j<4-i;j++)
		{
                  cout << " " ;
		}

		cout << endl;

	}
}
int main()
{
	pattern1();
	pattern2();
	pattern3();
	pattern4();
	pattern5();
	pattern6();
	pattern7();
	pattern8();
	pattern9();
	pattern10();
	pattern11();
        pattern12();
	pattern13();
	pattern14();
	pattern15();
	pattern16();
	pattern17();
}

