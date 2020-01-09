//tinh tong cac so duong chan va so am le trong mang
//
#include <iostream>
 
using namespace std;

int main() {
	int n, tongDuongChan = 0, tongAmLe = 0;
	cout << "Nhap vao so phan tu mang: ";
    cin >> n;
  
    //khai bao
    int mang[n];
    
    for(int i = 0;i < n; ++i){
    	cout<<"mang[" << i << "]" << "=";
    	cin >> mang[i];
    }
    
    //tinh toan
	for(int i = 0;i < n; ++i){
		if(mang[i] > 0 && mang[i] % 2 == 0) {
			tongDuongChan+=mang[i];
		}
		
		if(mang[i] < 0 && mang[i] % 2 != 0){
			tongAmLe+=mang[i];
		}
	}
    
    //in ra man hinh
    cout<< "Tong cac so duong va chan la: " <<tongDuongChan <<endl;
    cout<< "Tong cac so am va le la: " <<tongAmLe;
    
    
    
	
	
	
	
	
	
	return 1;
}
