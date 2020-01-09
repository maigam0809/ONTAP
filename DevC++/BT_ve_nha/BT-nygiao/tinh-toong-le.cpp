// Viet chuong trình nhap vào n 
// b, tinh tong cac so chia het cho 3
#include <stdio.h>
using namespace std;
int tinhTong(int n){
	int tong=0;
    for(int i=1; i<=n;i++){
    	tong+=i;
    	if(tong%3==0);
    	printf("tong :%d\n",tong);
    	
	}
	return tong;
}
int main(){
	int tong=0;
	int n=0;
	printf ("Nhap so nguyen n la:");
	scanf ("\n %d:",&n);
//	tinh tong theo ham chia het cho 3 
    tong=tinhTong(n);

	return 1;
}
