#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char a;
	
	printf("input a char : ");
	scanf("%c",&a);
	
	if('A' <= a && a <= 'Z')
	  printf("대문자입니다.");
	
	else if('a' <= a && a <= 'z')
	  printf("소문자입니다."); 
	
	else if('0' <= a && a <='9')
	  printf("숫자입니다.");
	
	else
	  printf("기타 글자입니다.");
	   
	   
	return 0;
}
