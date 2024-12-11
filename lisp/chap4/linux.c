#include<stdio.h>
#include<stdlib.h>
#include<editline.h>
int main(int argc,char** argv)
{
	//printf("%ld",sizeof(input));
	/* Print Version and Exit Information */
	puts("Lisp Version 0.0.0.1");
	puts("Press Ctrl+c to Exit\n");

	/*In a never ending loop*/
	while(1)
	{
         /* Output our prompt */
		char* input=readline("lisp>");

         /* Read a line of user input of maximum size 2048 */
		add_history(input);
         
	 /* Echo input back to user */
                printf("No you're a %s\n",input);
	
	/* Free retrived input */
                free(input);
	}
	return 0;
}
