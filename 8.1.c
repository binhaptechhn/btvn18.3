#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float com=0,gia;
	printf("Gia san pham : ");
	scanf("%f",&gia);
	if (gia >= 100000)
	com = gia * 0.1;
	printf("\n Triet khau = %.2f",com);
	return 0;
}
