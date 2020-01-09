#include <stdio.h>
const int Max=1000;
int nhapMang(int n,int a[]){
	for(int i=0;i<n;i++){
		printf ("Nhap a[%d]=",i);
		scanf ("%d",&a[i]);
	
	}
	return 0;
}
int tinhMax(int n,int a[]){
	
	int max=a[0];
	for (int i=0;i<n;i++){
		if (a[i]>max)
	    max=a[i];	
	}
	printf ("Max =%d\n",max);
	return max;
}
int tinhMin(int n,int a[]){
	int min=a[0];
	for (int i=0;i<n;i++){
		if (a[i]<min)
	    min=a[i];	
	}
	printf ("Min=%d",min);
	return min;
}
int main(){
	int n;
    int a[Max];
	
	printf ("Nhap so nguyen n:");
	scanf ("%d",&n);
	
	
	nhapMang(n,a);
	tinhMax(n,a);
	tinhMin(n,a);
	
   return 0;
   }


