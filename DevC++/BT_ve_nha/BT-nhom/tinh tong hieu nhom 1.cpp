// Nhap v�o hai so nguy�n a, b. In ra m�n h�nh tong, hieu,
//t�ch, thuong ca hai so tr�n 
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
