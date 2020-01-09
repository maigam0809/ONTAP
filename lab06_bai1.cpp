#include <stdio.h>
#include <math.h>
const int MAX = 100000;
int arr[MAX];

int main(){
	int n;
	printf ("====== TRUNG BINH CONG SO CHIA HET CHO 3 CO TRONG MANG========\n");
    printf("Nhap so luong phan tu n = ");
    scanf("%d", &n);
    
    // Nhap mang
    for(int i = 0;i < n; ++i){
        printf("\nNhap a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
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
	
	return 0;
}


