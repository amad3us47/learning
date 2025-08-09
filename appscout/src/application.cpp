#include <stdio.h>

#include <iostream>


int show()  // showing the background processes
{
	return system("tasklist");
}

int main()
{
	show();
};
