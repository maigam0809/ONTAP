#include <stdio.h>
#include <math.h>
int main(){
	float a,b,kq=0;
	char pt;
	printf ("Nhap so a la:");
	scanf ("%f",&a);
	
	printf("Nhap so b la:");
	scanf ("%f",&b);
	
	printf ("Nhap phep can tinh la:");
	scanf ("%s",&pt);
	
	if (pt== '+'){
		kq=a+b;
		
		
	}else if(pt== '-') {
		kq=a-b;
	    
	}else if (pt=='*'){
		kq=a*b;
	}
	printf ("Ket qua ban tinh la:%.1f",kq);
   return 1;
   }


