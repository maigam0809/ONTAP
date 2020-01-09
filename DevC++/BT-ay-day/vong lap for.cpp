// Vi?t chuong trình C++ de nhap nhap mot so nguyên, tìm boi so cua so dó voi các so tu 1-15 , sau dó in ket qua ra màn hình.
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
