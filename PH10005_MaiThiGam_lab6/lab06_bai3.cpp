#include <stdio.h>
const int MAX=100;
int main(){
	int n;
	int arr[MAX];
	
	do{
	
	printf ("=========SAP XEP THEO THU TU GIAM DAN==========\n");
	printf ("Nhap so nguyen n:");
	scanf ("%d",&n);
	}while(n<0);
	
//	  nhap mang
	for(int i=0;i<n;i++){
		printf ("Nhap arr[%d]=",i);
		scanf ("%d",&arr[i]);
	}
	printf ("=================================================\n");
	printf ("Thu tu giam dan cua mang la :\n");
//	 sap xep mang  bang cach hoan vi
    
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (arr[i]>arr[j]){
				int hoanVi;
				hoanVi=arr[i];
				arr[i]=arr[j];
				arr[j]=hoanVi;
			}
		}
	}
//  xuat mang
    for(int i=0;i<n;i++){
    
    	printf ("Vi tri thu mang[%d]la:%d\n",i,arr[i]);
    	
	}
	
   return 0;
   }


