#include <stdio.h>
#include <math.h>
const float PI=3.14;
void tinhChuVi(float r){
	
	float chuVi;

	
	chuVi=2*PI*r;
	
	printf ("Chu vi cua hinh tron la:%.2f",chuVi);
		
}
void tinhDienTich(float r){
	
	float dienTich;

	
	dienTich=r*PI*r;
	
	printf ("\nDT cua hinh tron la:%.2f",dienTich);
		
};

int main(){
	float r;
	
	printf ("Nhap ban kinh:");
	scanf ("%f",&r);
	
	tinhChuVi(r);	
    tinhDienTich(r);
	 
	
   return 0;
   };


