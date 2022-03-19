#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z ;
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("Nhap y: ");
	scanf("%d",&y);
	printf("Nhap z: ");
	scanf("%d",&z);
	if (x == y && y == z)
	printf("The Numbers are equal");
	if (x < y && y < z)
		printf("\nThe Larger Number is: %d",z);
	if (x < y && y > z)
		printf("\nThe Larger Number is: %d",y);
	if (x > y && x > z)
		printf("\nThe Larger Number is: %d",x);
	return 0;
}
