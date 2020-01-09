#include <stdio.h>
int main (){
    float  a,b;

	printf ("Nhap so a =");
	scanf ("%f",&a);
	
	printf ("Nhap so b =");
	scanf("%f",&b);
	
	if(a==0){
		if(b==0){
			printf ("Phuong trinh co vo so nghiem.");
			
		}else{
			printf ("Phuong trinh vo nghiem.");
			
	    } 
    }else{
	 printf ("Phuong trinh co nghiem la x = %.2f",-b/a);
	 
    }
    return 1;
}
