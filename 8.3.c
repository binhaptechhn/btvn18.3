#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1 , num2 ;
	printf("Nhap num1: ");
	scanf ("%d",&num1);
	printf("Nhap num2: ");
	scanf ("%d",&num2);
	if( num1 == num2)
	printf("\n The Numbers are equal");
	else if (num1 < num2)
	printf("\n The Larger Number is: %d", num2);
	else
	printf("\n The Larger Number is: %d", num1);
	return 0;
}
