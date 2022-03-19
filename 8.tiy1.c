#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("Nhap so x nho hon 2000 hoac lon hon 3000: ");
	scanf ("%d",&x);
	printf("nhap y tu 100-500: ");
	scanf ("%d",&y);
	if (x < 2000 || x > 3000){
		printf ("x hop le\n");
	}else
		printf("khong hop le\n");
	if (y >= 100 && y <= 500){
		printf("y hop le");
	}else
		printf("khong hop le");
	return 0;
}

