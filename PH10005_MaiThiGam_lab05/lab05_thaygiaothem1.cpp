//Hay tinh chu vi va dien tich cua hinh tron va viet bang ham?? 
#include <stdio.h>
const float PI=3.14;


// Ham co tham so va co gia tri tra ve! 
int tinhChuVi(float r){
	float chuVi;
	
	chuVi=2*PI*r;
	printf ("Chu Vi la:%.2f",chuVi);
	return chuVi;
}

// Ham co tham so va khong co gia tri tra ve.
void tinhDienTich(float r){
	float dienTich;
	
	dienTich=PI*r*r;
	printf ("\nDien tich la:%.2f",dienTich);
}
int main(){
	float r;
	
	printf ("===================================\n");
	printf ("TINH CHU VI VA DIEN TICH HINH TRON.\n");
	
	printf ("Nhap ban kinh:");
	scanf ("%f",&r);
	
	tinhChuVi(r);
	tinhDienTich(r);
	
	
   return 0;
   }


