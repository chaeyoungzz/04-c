#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int f; 
	printf("정수 하나를 입력하시오 : ");
	scanf("%i",&a);
	
	if (a<0)
	   f=-a;
	else
	   f=a;
	
	printf("절댓값은 %i 입니다.",f);
	   
	   
	return 0;
}
