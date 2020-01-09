#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int tu1, tu2, mau1, mau2;
	float tong, hieu, tich, thuong;
	printf("Nhap tu so thu 1: ");
	scanf("%d", &tu1);
	printf("Nhap mau so thu 1: ");
	scanf("%d", &mau1);
	printf("Nhap tu so thu 2: ");
	scanf("%d", &tu2);
	printf("Nhap mau so thu 2: ");
	scanf("%d", &mau2);
	
	//tinh toan
	tong = (float) (tu1*mau2 + tu2 * mau1) / (mau1 * mau2);
	hieu = (float) (tu1*mau2 - tu2 * mau1) / (mau1 * mau2) ;
	tich = (float) (tu1 * tu2) / (mau1 * mau2);
	thuong = (float) (tu1 * mau2) / (tu2 * mau1) ;
	
	
	printf("\nTong la: %.2f", tong);
	printf("\nHieu la: %.2f", hieu);
	printf("\nTich la: %.2f", tich);
	printf("\nThuong la: %.2f", thuong);
   return 0;
}


