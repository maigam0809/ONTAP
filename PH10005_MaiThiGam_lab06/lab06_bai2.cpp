#include <stdio.h>
#include <math.h>
const int MAX=100;
int arr[MAX];
int main(){
	int n;

		printf ("======TIM SO LON VA NHO NHAT TRONG MANG =======\n");
	printf ("Nhap so nguyen n:"); scanf ("%d",&n);
//	 nhap mang
	for(int i=0;i<n;i++){
		printf ("\nNhap arr[%d]=",i);
		scanf ("%d",&arr[i]);
	}
	
	int max;
	for(int i=0;i<n;i++){
		if (arr[i]>max){
			max=arr[i];
		}
	}
	printf ("So lon nhat la:%d",max);
	
//	 tinh so nho nhat co trong mang
	int min=arr[0];
	for(int i=0;i<n;i++){
		if (arr[i]<min){
			min=arr[i];
		}
	}
	printf ("\nSo nho nhat la:%d",min);	
	
   return 0;
   }


