#include <stdio.h>
int main(){
	float so;
	float tien;
    
	printf ("Nhap so dien tieu thu:");
	scanf("%f",&so);
		
	if(so < 0){
		printf("Ko hop le.");
		return 1;
	} else if (so<=50){
		tien=so*1678;
		
	}else if(so<=100){
		tien=50*1678 + (so-50)*1734;
		
	}else if(so<=200){
		tien=50*1678 + 50*1734 + (so-100)*2014;
					
	}else if(so<=300){
		tien=50*1678 + 50*1734 + 100*2014 + (so-200)*2536;		
			
	}else if(so<=400){
		tien=50*1678 + 50*1734 + 100*2014 + 100*2536 + (so-300)*2834;		
			
	}else {
		tien=50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (so-400)*2937;
	}
	
	printf ("Tien phai tra la: %.2f",tien);
	
	return 1;
}
     


