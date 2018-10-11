#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 50;
	int a;
	
	do
	{
		printf("Guess a number! : ");
		scanf("%i",&a);
		
		if (a<answer)
		{
			printf("low!\n");
		}
		else if (a>answer)
		{
			printf("high!\n");
		}
		else
		{
			printf("Á¤´ä!");
		}
		
	}	
	while (a != answer);
	return 0;
}
