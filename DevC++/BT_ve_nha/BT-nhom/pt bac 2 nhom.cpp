// bai giai pt bac hai
#include <iostream>
#include <math.h>
 using namespace std;
 int main (){
 	int a,b,c;
 	float x1,x2,denta;
 	cout<<"Nhap so nguyen a:";
 	cin>>a;
 	cout<<"Nhap so nguyen b:";
 	cin>>b;
 	cout<<"Nhap so nguyen c:";
 	cin>>c;
 	
 	denta=(b*b/4*a*c); // tinh delta sai nhe
 	
 	if(denta>0){
 		cout<<"Phuong trinh co hai nghiem :"<<endl;
 		x1=(-b+sqrt(denta))/(2*a);
 		x2=(-b-sqrt(denta))/(2*a);
 		cout<<x1<<endl<<x2;
 	}
 	
 	if (denta==0){
 		cout<<"Phuong trinh co nghiem duy nhat :"<<endl;
 		x1=(-b/2*a);
 		cout<<x1;
	} else{
    	cout<<"Phuong trinh vo nghiem :";
	}
}
//Van de
//* nho trinh bay cho dep. e can cac dong chuan vao
// de y vi tri dau {}. Can chinh cho dung
//delta = b*b - 4*a*c 
//e viet cac dau = voi + ro ra: VD: b = a + c; 
//moi dau + - * / them dau cach vao cho de doc
 

