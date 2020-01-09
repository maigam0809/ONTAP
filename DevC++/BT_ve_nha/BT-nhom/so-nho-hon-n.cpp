#include <stdio.h>
using namespace std;

int main(){
	int n=0, i=1, j=1;
	
	printf("Nhap so n = ");
	scanf("%d", &n);
	
	//in ra so le
	while(i < n){
		if(i % 2 != 0){
		 printf("%d ", i);	
		}
		i++;
	
	}
	
	
	printf("La so le",i);
	printf("\n");
	
	//in ra so chan
	while(j < n){
		if(j % 2 == 0){
		 printf("%d ", j);	
		} 
		j++;
		
	}
		printf("La so chia het cho 2 ",i);
	
	return 0;
}

//debai: nhap vao so n. in ra va so chan < n

//  1 3 5 7
// 2 4 6 8

/*

*/

//doc cai bai nhap xuat di da roi lam

//muon format code thi su dung phim tat ctrl + shift + a

//printf e muon nhap gia tri thi dung &n

//em dung c++ code c cung duoc khong sao. loi o day la loi  include
