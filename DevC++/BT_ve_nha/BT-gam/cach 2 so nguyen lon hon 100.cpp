// viet phuong trinh c ++ de nhap mot so nguyen bat ky tu ban phim va in ra man hinh de noi cho nguoi dung biet do la gia tri nho h?n hay lon hon 100
#include <iostream>
using namespace std;
int main(){

	int n; 
	cout <<"Nhap mot so nguyen bat ky n:";
	cin>>n;
//	neu ta coi n: 100 > 1 thi so day lon hon 100 
	if ((n/100)>1){
		cout<<"Gia tri nay lon hon 100."<<endl;
//		neu gia tri kia khog duoc thuc thi thi chung to so nhap vao nho hon 100
	}else{
		cout<<"Gia tri nho hon 100.";
	return 1;
	
	}
}
