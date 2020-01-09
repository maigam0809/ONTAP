#include <stdio.h>
int main(){
	int so1,so2;
	int tong,hieu;
	
	printf("Moi nhap so thu nhat:");
	scanf("%d",&so1);
	
	printf("Moi nhap so thu hai:");
	scanf("%d",&so2);
	
	tong=so1+so2;
	hieu=so1-so2;
	
	printf("\n");
	printf ("Tong la: %d+%d=%d",so1,so2,tong);
	printf("\n");
	printf ("Hieu la: %d-%d=%d",so1,so2,hieu);
	return 0;
	
}

