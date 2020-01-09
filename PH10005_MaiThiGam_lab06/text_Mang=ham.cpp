#include <stdio.h>
const int MAX=100;
void nhapMang(int arr[],int n){
	for (int i=0;i<n;i++){
		printf ("Nhap arr[%d]=",i);
		scanf ("%d",&arr[i]);
	}
}
void xuatMang(int arr[],int n){
	for (int i=0;i<n;i++){
		printf ("Nhap arr[%d]=",i);
		scanf ("%d",&arr[i]);
	}
}
void tinhTrungBinh(int arr[],int n){
	float tong=0;
	float tb;
	int count=0;
	
	for(int i=0;i<n;i++){
		if (arr[i]%3==0){
			tong+=arr[i];
			count++;
			
		}
	}
	tb=tong/count;
	printf ("\nTrung binh cong la:%.2f",tb);
}

int main(){
	int n;
	int arr[MAX];
	int i;
	do{
		printf ("Nhap so nguyen n :"); scanf ("%d",&n);
	}while(n<0||n>100);
	
	
	printf("\n======NHAP MANG=====\n");
    nhapMang(arr, n);
    printf("\n======XUAT MANG=====\n");
    xuatMang(arr, n);
    printf("\n==== TRUNG BINH ======\n");
    tinhTrungBinh(arr,n);
    
	

    

   return 0;
   }


