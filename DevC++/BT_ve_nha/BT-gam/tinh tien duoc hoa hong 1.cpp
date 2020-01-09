// vit chuong trinh  de tinh hoa hong dai ly ban se nhan duoc tuy theo muc doanh so ban hang 
// C?a h�ng c?a b?n nh?n g?i b�n s?n ph?m cho m?t c�ng ty kh�c v� sau m?i th�ng b?n c?n t�nh to�n s? ti?n hoa h?ng b?n nh?n du?c. V?i m?c hoa h?ng theo doanh s? b�n h�ng nhu sau:

// 5% n?u t?ng doanh s? nh? hon ho?c b?ng 100 tri?u.

//  10% n?u t?ng doanh s? nh? hon ho?c b?ng 300 tri?u.

// 20 % n?u t?ng doanh s? l� l?n hon 300 tri?u.

// D?a v�o d? li?u tr�n, b?n vi?t chuong tr�nh C++ d? t�nh hoa h?ng d?i l� b?n s? nh?n du?c. 
#include <iostream>
#include <iomanip>

using namespace std;
int main () {
	int n;
	float S,T,D;
	
	cout<<"Nhap so hoa hong ma ban ban duoc la:";
	cin>>n;
	
	//chi can viet 1 lan o day
	cout << setiosflags(ios::fixed);
    cout << setprecision(2);
	
	if(n<=100){
		S=0.05*n;
	    //cout << setiosflags(ios::fixed); bo
        //cout << setprecision(2); bo
		cout<< "So tien hoahong ban nhan duoc la:"<<S<<"trieu";
			
	}else if(100<n<=300){
		T=0.1*n;
	    //cout << setiosflags(ios::fixed);
        //cout << setprecision(2);
		cout<<"So tien hoa hong ban nhan duoc la: "<<T<<"trieu";

			
	}else{
		D=0.2*n;
		//cout << setiosflags(ios::fixed);
        //cout << setprecision(2);
		cout<< "So tien hoa hong nhan duoc la:"<<D<<"trieu";
		     
		
	}

	return 0;
	
}


/* 
	cout << setiosflags(ios::fixed);
	cout << setprecision(2);
	
	chi can viet 1 lan thoi
	
	e co dang nhin ko?
	con bai nao nua ko e k nho nua . de a giao bai nha oke

*/
