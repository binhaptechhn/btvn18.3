#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2 ,res;
	char op;
	printf("Nhap phep tinh: ");
	scanf("%c",&op);
	printf ("Nhap num1: ");
	scanf ("%d",&num1);
	printf ("Nhap num2: ");
	scanf ("%d",&num2);
	switch(op){
		case '+':
			res = num1 + num2;
			printf("\n The Sum is: %d", res);
			break;
		case '-':
			res = num1 - num2;
			printf("\n Number after Subtraction: %d", res);
			break;
		case '/':
			res = num1 / num2;
			printf("\n Number after Division: %d", res);
			break;
		case '*':
			res = num1 * num2;
			printf("\n Number after multiplication: %d", res);
			break;
		default:
		printf("\n Invalid");
		break;}
	return 0;
}
