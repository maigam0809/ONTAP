// Vi?t chuong tr�nh C++ de nhap nhap mot so nguy�n, t�m boi so cua so d� voi c�c so tu 1-15 , sau d� in ket qua ra m�n h�nh.
#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int a,b,tich;
	
	tich=0;
	cout<<"Nhap so nguyen a:";
	cin>>a;
	
	
	for(b=1;b<=15;b++){
		tich=a*b;
		cout<<a<<"x"<<b<<"="<<tich<<endl;
		
	}
	return 0;
}
