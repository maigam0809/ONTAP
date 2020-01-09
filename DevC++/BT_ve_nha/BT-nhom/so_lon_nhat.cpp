//Tìm so lon nhat trong mang vua nhap
#include <iostream>
 
using namespace std;
 
int main() {
    int n, max, vitri;
    cout << "Nhap vao so phan tu mang: ";
    cin >> n;
  
    // Nhap mang
    int mang[n];
    
    //nhap gia tri tung phan tu trong mang
    for(int i = 0;i < n; ++i){
    	cout<<"mang[" << i << "]" << "=";
    	cin >> mang[i];
    }
    
    //truc tiep
    max = mang[0];
    vitri = 0;
    
    for(int i = 1;i < n; ++i){
		if(max < mang[i]){
			max = mang[i];
			vitri = i;
		}
	}
    
    //in ra gia tri
    cout<< "Gia tri lon nhat la: " << max<<endl;
    cout<< "O vi tri la: " << vitri;

    return 0;
}

