// viet mot phuong trinh de nhac nguoi dung nhap 3 so nguyen va tim gia tri lon nhat
#include <iostream>
using namespace std;
int main(){
	int a,b,c,max;
	
	cout <<"Nhap so thu nhat la a:";
	cin>> a;
	
	cout <<"Nhap so thu hai la b:";
	cin>>b;
	
	cout <<"Nhap so thu ba la c:";
	cin>>c;
	
	
	
	
//	if(a > b){	
//		if(a > c) {
//			cout << "GIa tri la: " << a;
//		}else {
//			cout << "GIa tri la: " << c;	
//		}			
//	}else if(a < b){
//		if(b > c) {
//			cout << "GIa tri la: " << b;
//		}else {
//			cout << "GIa tri la: " << c;	
//		}	
//	} else {
//		// day la truong hop a = b
//		if(b > c) {
//			cout << "GIa tri la: " << b;
//		}else {
//			cout << "GIa tri la: " << c;	
//		}
//	}
	
	
	//cach 2
	max = a;
	
	if(max < b){
		max = b;
		//nhieu code o day
	}
	
	//so sanh max voi c
 	if(max < c){
		max = c;
		//nhieu code o day
	}
	
	//in ra gia tri max
	cout << "Gia tri max: " << max;
	
	return 0;
}
//khi ma biet ro co chinh xac bao nhieu truong hop xay ra thi dung else. khong thi cu dung else if cho chac


//cach 2
/*
so a b c
coi max la so a
so sanh b voi max.co 3 th: max < b, max > b, max = b.
max < b => gan max = b. so sanh max voi c
max > b => ko thay doi gia tri. so sanh max voi c

max voi c: co 3 th: max < c, max > c, max = c
max < c => gan max = c. in ra gia tri cua max
max > c => in ra gia tri cua max



*/



//so sanh 3 so a b c


//cach 1

// so sanh so a voi so b 
//==> a < b thi so sanh b voi c
//==> a > b thi so sanh a voi c
//==> neu a = b thi lay a hoac b so sanh voi c

//Tiep tuc so sanh a hoac b voi c:
// neu a hoac b < c thi gia tri lon nhat la c
//nguoc lai thi gia tri lon nhat la a hoac b



