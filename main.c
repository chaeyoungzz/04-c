#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num=0;
	char c;
	char f[100];
	
	//string
	printf("input a string : ");
	//scanf("%s");
	
	while ( (c=getchar()) !='\n')
	{
	  if( '0' <= c && c <= '9')
	    num++;
	}
	printf("the number of digits is %d",num);
	
	return 0;
}
