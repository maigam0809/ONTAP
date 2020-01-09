#include <stdio.h>
#include <math.h>
int main(){
	int min;
	int max;
	
	
	printf ("Nhap min :");
	scanf ("%d",&min);
	printf ("Nhap max:");
	scanf ("%d",&max);
	int i=min;
	int tong=0;
	
	while (i<=max){
		tong+=i;
		i++;
//		printf ("\nTong =%d",tong);tinh tong tung vi tri;
				
	}
   printf ("Tong cua hai so tu min %d den max %d la %d",min,max,tong);
   
}

