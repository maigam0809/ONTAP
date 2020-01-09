#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int cn, tt;

	do {
			printf ("Moi ban nhap vao chuc nang can chon (1-10):");
			scanf ("%d",&cn);
		
		switch (cn) {
			case 1: {
				break;
			}
		}

	    printf("\nBan co muon tiep tuc chuong trinh khong?");
	    printf("\n1. Co\n 2. Khong\n");
	    scanf("%d", &tt);
	    
	    if(tt == 1){
	    	cn = -1;
		}
	}while(cn < 0 || cn > 10);

    
    
   return 0;
}


