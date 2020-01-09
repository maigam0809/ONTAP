#include <stdio.h>
#include <math.h>
int main(){
	float a,b;
	char k;
	printf ("Nhap so a la:");
	scanf ("%f",&a);
	printf ("Nhap so b la:");
	scanf ("%f",&b);
	printf ("Nhap phep tinh ban can chon:");
	scanf ("%s",&k);
	
	switch (k){
		case '+':
			printf ("Tong cua hai so la:%f",a+b);
			
			break;
		case '-':
		    printf ("Hieu cua hai so la:%f",a-b);
		    
			break;
		case '*':	
		    printf ("Tich cua hai so la:%f",a*b);
				
		    break;
	default :
		printf (" Ban da nhap sai.Moi ban nhap lai.");
		break;
		
	    	    
  
   }
   return 0;
}


