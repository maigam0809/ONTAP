// Nhap v�o ba so  a, b, c (l� c�c so thuc kh�ng �m). Kiem
// tra xem d� c� phai l� ba canh cua mot tam gi�c hay kh�ng.
// Neu c� th� tam gi�c d� thuoc loai tam gi�c g�? (Thuong,
// c�n, vu�ng, vu�ng c�n, hay deu).
#include <iostream>
using namespace std;
int main (){
	int a,b,c;
	cout<<"Nhap  ba canh cua tam giac lan luot la:"<<endl;
	cin>>a>>b>>c;
	if(a+b>c&& a+c>b&&b+c>a){
		
		 if(a*a==b*b+c*c||a*a+b*b==c*c||a*a+c*c==b*b){
			cout<<"Ba canh tao thanh tam giac vuong";
			
		}else if(a==b==c){
			cout<<"Ba canh cua tam giac tao thanh tam giac deu canh bang"<<a<<endl;
		}else if(a==b||b==c||a==c){
			cout<<"Ba canh cua tam giac tao thanh tam giac can "<<endl;
			
		}else if (a*a<b*b+c*c||a*a+b*b>c*c||a*a+c*c>b*b){
			cout<<"Ba canh cua tam giac tao thanh tu"<<endl;
		}else{
		cout<<"Tam giac nhon"<<endl;
	}
	}else{
		cout<<"Ba canh khong tao thanh tam giac" <<endl;
	}
	return 0;
	}

	


