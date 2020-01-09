#include <stdio.h>
int Max=100;
int nhapMang(int n,int a[]){
	for(int i=0;i<n;i++){
		printf ("Nhap a[%d]=",i);
		scanf ("%d",&a[i]);
		
	}
	return 0;
}
int tinhTrungBinh(int n,int a[]){
	float tong=0;
	float tb;
	int bienDem=0;
	
	for(int i=0;i<n;i++){
		if(a[i]%3==0){
			tong=tong+a[i];
			bienDem++;
			
		}
	}
	tb=tong/bienDem;
	printf ("Ket qua la=%.2f",tb);	
	
	return tb;
	
}
	
int main(){
	int n;

	
	printf ("Nhap so nguyen n:");
	scanf ("%d",&n);
	int a[Max];
	
	nhapMang(n,a);
	tinhTrungBinh(n,a);
   return 0;
   }


