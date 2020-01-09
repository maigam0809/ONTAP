// Gi? s? b?n là k? toán cho m?t công ty. B?n c?n vi?t m?t chuong trình C++ d? nh?p luong nhân viên, tính thu? thu nh?p và luong ròng (s? ti?n luong th?c s? mà nhân viên dó nh?n du?c). V?i các thông s? sau (mình ch? dua ra các con s? này cho d? tính toán):

// 30% thu? thu nh?p n?u luong là 15 tri?u

// 20% thu? thu nh?p n?u luong t? 7 d?n 15 tri?u

// 10% thu? thu nh?p n?u luong du?i 7 tri?u
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int luong; 
 
	float tienThue, luongRong, phanTramThue;
	cout<<"Nhap luong nhan vien la :";
	cin>>luong;
	
    if(luong>=15000000){
    	tienThue = luong * 0.3;
    	phanTramThue = 30;
		 		 
	}else if (7000000<=luong && luong <15000000){
		tienThue = luong * 0.2;
		phanTramThue = 20;	
	}else{
		tienThue = luong * 0.1;
		phanTramThue = 10;	
			
	} 
	
    luongRong = luong - tienThue;
    
    cout << setiosflags(ios::fixed);
    cout << setprecision(2);
     
     cout<<"Phan tram thue: " <<phanTramThue << endl;
    cout<<"Luong la: "<<luong<<endl;
    cout<<"Thue phai tra la: "<<tienThue<<endl;
    cout<<"Luong rong(luong chinh thuc duoc nhan): "<<luongRong<<endl;
	return 0;
}
