#include <stdio.h>
int main(){
	float n;

	printf ("Nhap  Diem so:");
	scanf ("%f",&n);

	if(n > 10 || n < 0){
		printf("Khong hop le.");	
		
	} else if (n>=9){
		printf("Hoc luc xuat sac.");
			
	} else if(n>=8) {
	    printf("Hoc luc gioi.");
	    
	} else if(n>=6.5) {
	    printf("Hoc luc kha.");
	    
	}else if(n>=5) {
	    printf("Hoc luc trung binh.");
	    
	}else if(n>=3.5) {
	    printf("Hoc luc yeu.");
	    
	}else  {
	    printf("Hoc luc kem.");  
	    
	}
	
   return 1;
}


