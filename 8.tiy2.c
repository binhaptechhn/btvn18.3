#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char app;
    printf("Nhap ten app: ");
    scanf ("%c",&app);
    switch(app){	
    	case 'A' :		
			printf("\nOpen Ada");		
			break;
		case 'B' :	
		case 'b' :	
			printf("\nOpen Basic");		
			break;
		case 'C' :	
		case 'c' :	
			printf("\nOpen COBOL");		
			break;
		case 'D' :	
		case 'd' :	
			printf("\nOpen dBASE III");		
			break;
		case 'F' :	
		case 'f' :	
			printf("\nOpen Fortran");		
			break;
		case 'P' :	
		case 'p' :	
			printf("\nOpen Pascal");		
			break;
		case 'V' :	
		case 'v' :	
			printf("\nOpen BVisual C++");		
			break;
	default:
	printf("\n Invalid");
}
	return 0;
}
