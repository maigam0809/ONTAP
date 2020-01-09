/*
cho 1 mang n phan tu.

a, tinh tong cac phan tu trong mang.
b, tinh trung binh cong cac phan tu trong mang.
c, kiem tra xem mang co bao nhieu so duong bao nhieu so am.
d, tinh tong cac so duong trong mang
e, tinh tong cac so am trong mang
f, tinh trung binh cong cac so duong
g, tinh trung binh cong cac so am
h, tinh tong cac so > 0 va chia het cho 3
i, tinh tong cac co < 0 va khong chia het cho 3

* dung ham de viet
* moi cau la 1 ham


*/
#include <stdio.h>
const int MAX = 100000;
int arr[MAX];
 
int main(){
    int n;
    int tong;
    printf("\nNhap so luong phan tu n =");
    scanf("%d", &n);
    
    // Nhap mang
    for(int i = 0;i < n; ++i){
        printf("\nNhap a[%d] = ", i);
        scanf("%d", &arr[i]);
        }
	    for (int i=0;i<n; ++i){
	    	tong=tong+ arr[i];
	    	printf ("Tong cua mang la:%d\n",tong);
	    	}
    	
    	

    return 1;
   }     
	
	
