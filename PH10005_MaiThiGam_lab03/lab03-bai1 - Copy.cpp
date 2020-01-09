#include <stdio.h>
  
int main(){
    float n;
	printf ("TINH HOC LUC CUA SINH VIEN\n");
	printf ("Nhap so diem cua sinh vien la :");
	scanf ("%f",&n );
	
	if(n <3.5){
		printf ("Hoc luc kem.");
		
	}else if ( 3.5<=n&&n<5  ){
		printf ("Hoc luc yeu.");
		
	}else if ( 5<=n && n<6.5 ){
		printf ("Hoc luc trung binh.");	
		
	}else if  (6.5<=n && n<8 ){
		printf ("Hoc luc kha.");
		
	}else if ( 8<=n && n<9 ){
		printf ("Hoc luc gioi.");
		
	}else if(n>=9){
		printf ("Hoc luc xuat sac.");
	}
	return 1;
	}		
