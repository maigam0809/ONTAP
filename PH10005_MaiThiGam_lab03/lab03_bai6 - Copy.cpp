#include <stdio.h>
#include <math.h>
int main(){
	int k;
	printf ("Cho menu chuong trinh?\n");
	printf ("1.Chuong trinh tinh hoc luc cua sinh vien.\n");
	printf ("2.Chuong trinh tinh phuong trinh bac 1.\n");
	printf ("3.Chuong trinh tinh phuong trinh bac 2.\n");
	printf ("Chon trinh ban muon tinh la:");
	scanf("%d",&k);
	switch (k){
		case 1:
				printf ("1.Chuong trinh tinh hoc luc cua sinh vien.\n");
				break;
		case 2:		
		        printf ("2.Chuong trinh tinh phuong trinh bac 1.\n");
		        break;
		case 3:
			    printf ("3.Chuong trinh tinh phuong trinh bac 2.\n");
			    break;
	default :
		        printf ("Moi ban chon lai:");
		        scanf("%d",&k);
	     		    
		        
	}
	
	
   return 0;
   }
int tinhHocLuc(int)  


