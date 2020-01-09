#include <stdio.h>

int main ()
{
	float a,b;
	float chuVi,dienTich;
	
	printf ("Chieu dai cua HCN la:");
	scanf ("%f",&a);
	
	printf ("Chieu rong cua HCN la:");
	scanf ("%f",&b);
	
	printf("\n");
	chuVi=(a+b)*2;
	printf ("Chu vi HCN la: (%.2f + %.2f)*2 = %.2f", a, b, chuVi);
	
	printf("\n");
	dienTich=a*b;
	printf ("Dien tich HCN la: %.2f * %.2f = %.2f\n", a, b, dienTich);
	return 0;
}
