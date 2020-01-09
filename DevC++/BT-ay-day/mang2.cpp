#include <stdio.h>

int main(){
	int n;
	int a[100];
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {   
	  scanf("%d", &a[i]); 
	}
	
	int tong = 0; 
	for (int i = 0; i < n; i++) {   
		tong = tong + a[i]; 
	} 
	printf("Tong cac phan tu cua mang la %d", tong);
	
//	for (int i = 0; i < n; i++) {   
//	  printf("%d", a[i]); 
//	}

}
