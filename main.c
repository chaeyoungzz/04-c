#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int f; 
	printf("���� �ϳ��� �Է��Ͻÿ� : ");
	scanf("%i",&a);
	
	if (a<0)
	   f=-a;
	else
	   f=a;
	
	printf("������ %i �Դϴ�.",f);
	   
	   
	return 0;
}
