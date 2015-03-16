/* Write a Program to copy its input to its output,replacing each string of one or more blanks by a single blank */

#include<stdio.h>

int main(void)
{
	int c,lastc;

	lastc=65;

	while((c=getchar())!=EOF)
	{
		if(c==' ')
		{
			if(lastc!=' ')
				putchar(c);
		}
		else
			putchar(c);

		lastc=c;
	}
return 0;
}

