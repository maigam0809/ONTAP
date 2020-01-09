#include <stdio.h>
#include <math.h>
int main(){
	printf ("Viet Nam ta co bao nhieu dan toc anh em ?\n");
	printf ("a.52 \nb.53 \nc.54 \nd.55 \n");
	printf ("Moi ban chon dap an (a,b,c,d):");
	char dapAn;
	scanf ("%s",&dapAn);
	switch (dapAn){
		case 'a':
			printf ("Ban da chon sai \n");
		break;
		case 'b':
			printf ("Ban da chon sai \n");
		break;
		case 'c':
			printf ("Ban da chon dung \n");
		break;
		case 'd':
			printf ("Ban da chon sai \n");
		
	default	:
	    printf ("Moi ban nhap lai:%s",&dapAn);
		break;	
	}
	
   return 1;
   }


