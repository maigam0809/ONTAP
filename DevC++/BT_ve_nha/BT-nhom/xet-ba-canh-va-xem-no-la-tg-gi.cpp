// Nhap vào ba so  a, b, c (là các so thuc không âm). Kiem
// tra xem dó có phai là ba canh cua mot tam giác hay không.
// Neu có thì tam giác dó thuoc loai tam giác gì? (Thuong,
// cân, vuông, vuông cân, hay deu).
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

	


