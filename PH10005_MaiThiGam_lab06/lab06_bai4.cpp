#include <stdio.h>
#include <math.h>
int main(){
	int m,n;
	int a[50][50];
	printf ("=======================================\n");
	printf ("Nhap so hang=");scanf ("%d",&n);
	printf ("Nhap so cot=");scanf ("%d",&m);
	
	printf ("Nhap vao ma tran:\n");
	
	for(int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			printf ("Nhap a[%d][%d]=",i,j);
			scanf ("%d",&a[i][j]);
		}
	}
	printf ("=======================================\n");
	printf ("Ma tran ban vua nhap la:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf ("%d",a[i][j]);
		}
		printf ("\n");
	}
	
   return 0;
   }


