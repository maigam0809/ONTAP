#include <stdio.h>
int main (){
	float r;
	float dienTich,chuVi;
	const float PI = 3.14;
	
	printf ("Nhap ban kinh cua hinh tron:");
	scanf ("%f",&r);
	
	
	chuVi = 2*PI*r;
	dienTich = PI*r*r;
	
	printf ("Chu vi la: %.2f\n", chuVi);
	printf ("Dien tich la: %.2f", dienTich);	
}

