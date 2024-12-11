#include<stdio.h>
int main(int argc,char** argv)
{
	int n;
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("ok");
		       break;
case 2:printf("bad");
      break;
		default:printf("invalid");
	}
}
