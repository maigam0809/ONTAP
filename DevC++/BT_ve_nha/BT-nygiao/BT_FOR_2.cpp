/*
Viet chuong trình nhap vào so n

a, tinh tong cac so do
b, tinh tong cac so chia het cho 3
c, in ra uoc cua so n
d, tinh trung binh cong tu 1 den n
e, tinh S = 1 + 1/2 + 1/3 + … + 1/N
f, tinh tong binh phuong cac so le
g, in ra bang cuu chuong
*/
#include <stdio.h>
using namespace std;
//tinh tong
int tinhTong(int n);


int main(){
	int n=0;
	int tong = 0;
	
	printf("Nhap so n = ");
	scanf("%d", &n);
	
	//tinh toan
	
	
	//in ra man hinh
	printf("Tong = %d", tong);
	
	
	return 1;
}


int tinhTong(int n){
	int tong = 0;
	for(int i = 1; i <= n; i++){
		tong += i;
	}
	
	return tong;
}
	
	
