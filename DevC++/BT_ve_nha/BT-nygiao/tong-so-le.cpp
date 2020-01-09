#include <stdio.h>
using namespace std;
//tinh tong
int tinhTong(int n){
	int tong = 0;
	int i = 1;
	
	do {
		tong += i;
		i++;
		if(tong%3==0);
	} while(i <= n);
	return tong;
}

int main(){
	int n=0;
	int tong = 0;
	
	printf("Nhap so n = ");
	scanf("%d", &n);
	
	//tinh toan
	tong = tinhTong(n);
	
	//in ra man hinh
	printf("Tong = %d", tong);
	
	
	return tong;
}
