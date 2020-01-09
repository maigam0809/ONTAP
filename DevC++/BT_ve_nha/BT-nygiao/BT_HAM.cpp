//cho 2 so nguyen a b
//Viet ham de
/*
a, tinh tong 2 so a b. in ra ket qua
b, tinh hieu 2 so
c, tinh tich 2 so
d, tinh thuong 2 so
e, tinh trung binh cong cua 2 so
f, tim so lon hon giua 2 so
g, kiem tra xem moi so la so am hay so duong
h, kiem tra xem so co la so nguyen to hay khong (*) da xong
i, tim UCLN cua 2 so (*) da xong 
j, tim BCNN cua 2 so (*) da xong 


Thac mac lien he: https://www.facebook.com/luongtu996
*/
#include <stdio.h>
using namespace std;
//khai bao ham: nhin file hello.cpp
//ham tinh tong
int tinhTong(int a, int b);
void kiemTraAmDuong(int a);
int tinhHieu(int a,int b);
int tinhTich(int a,int b);
float tinhThuong(int a,int b);
float tinhTrungBinh(int a,int b);
int tinhMax(int a,int b);
void tinhSoNguyeTo(int x);
int gcd(int a, int b);


int main(){
	int a,b;
	int tong, hieu, tich;
	int max;
	bool snt;
	float thuong, tbcong;
	bool kiemTraA, kiemTraB;
	int bcnn;
	
	//nhap 2 so a va b
	printf("Nhap vao so a = ");
	scanf("%d", &a);
	printf("Nhap vao so b = ");
	scanf("%d", &b);
	
	//tinh toan
//	phan than ten bien 
	tong = tinhTong(a, b);
	hieu =tinhHieu(a,b);
	tich =tinhTich(a,b);
	thuong=tinhThuong(a,b);
	tbcong=tinhTrungBinh(a,b);
	max=tinhMax(a,b);
	
	//g
	//in ra ket qua
	printf ("**************************\n");
	printf ("Tong = %d \n", tong);
	printf ("Hieu =%d\n",hieu);
	printf ("Tich =%d\n",tich);
	printf ("Thuong=%f\n",thuong);
	printf ("Trung binh cong=%f\n",tbcong);
	printf ("So lon nhat =%d\n",max);
	printf ("So nguyen to =%d\n",snt);
    
    
	
	
	
	//g
	kiemTraAmDuong(a);
	kiemTraAmDuong(b);
	
	//kiem tra nguyen to
	
	tinhSoNguyeTo(a);
	tinhSoNguyeTo(b);
	printf ("UCLN cua hai so la:%d",gcd(a,b));
	printf ("\nBCNN cua hai so la:%d %d %d",(a*b)/gcd(a,b));
	
	return 1;
}

//cu phap cua ham 
// cau a 
int tinhTong(int a, int b){
	int t;
	t = a + b;
	return t;
}
//  cau g
void kiemTraAmDuong(int a){
	if(a > 0){
		printf("So %d la so duong. \n", a);
	} else {
		printf("So %d la so am. \n", a);	
	}
} 

//  cau b
int tinhHieu(int a,int b){
	return a-b;
}
// cau c
int tinhTich(int a,int b){
	return a*b;
}
//  cau d
float tinhThuong(int a,int b){
	return a/b;
}
//  cau f
float tinhTrungBinh(int a,int b){
	return (a+b)/2;
}
int tinhMax(int a,int b){
	int max;
	if(a > b){
	max=a;
	}
   else{
   	max=b;
   }
//	return a > b ? a : b;
    return max;  
}

// phep so sanh ? hanh dong voi ket qua dung : hanh dong voi ket qua sai
void tinhSoNguyeTo(int x){
	int dem = 0;
	
	for(int i = 1; i <= x; i++){
		if(x % i == 0){
			dem++;
		}
	}
	
	
	if(dem > 2){
		printf("So %d la so nguyen to.", x);
		printf("\n");
	}else {
		printf("So %d khong la so nguyen to.", x);
		printf("\n");
	}
}
int gcd(int x, int y){
	if (x==0||y==0){
		return x+y;
		
	}
	while (x!=y){
		if (x>y){
			x-=y;
				
		}else {
			y-=x;
			
		}
	}
	return x;		
	}





