// Nhap vào hai so nguyên a, b. In ra màn hình tong, hieu,
//tích, thuong ca hai so trên 
#include <iostream>
using namespace std;
int main (){
	int a,b,tong,hieu,tich,thuong;
	cout<<"Nhap so nguyen a vao day:";
	cin>>a;
	cout<<"Nhap so nguyen b vao day:";
	cin>>b;
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	thuong=a/b;
	cout<<"Tong cua hai so nguyen la:"<<tong<<endl;
	cout<<"Hieu cua hai so nguyen la:"<<hieu<<endl;
	cout<<"Tich cua hai so nguyen la:"<<tich<<endl;
	cout<<"Thuong cua hai so nguyen la:"<<thuong<<endl;
	return 0;
}
