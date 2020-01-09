#include <stdio.h>
int main(){
	int hang,cot;
	do{
	printf ("=============================\n");
	printf ("Nhap so hang cua mang:");
	scanf ("%d",&hang);
	printf ("Nhap so cot cua mang:");
	scanf ("%d",&cot);
	}while(hang<0||cot<0);
	
	int i,j;
	int mang[hang][cot];
	for (i=0;i<hang;i++){
		for(j=0;j<cot;j++){
			printf ("Nhap vao mang[%d][%d]=",i,j);
			scanf ("%d",&mang[i][j]);
			}
	}
	// Xuat mang binh phuong .
	printf("ma tran vua nhap la:\n");
	for(i=0;i<hang;i++){
		for(j=0;j<cot;j++){
			printf("%d\t",mang[i][j]*mang[i][j]);
		}
	printf ("\n");
	}
   return 0;
   }


