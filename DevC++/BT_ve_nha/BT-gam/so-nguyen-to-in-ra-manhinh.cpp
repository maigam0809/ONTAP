//Nh?p v�o 1 s? nguy�n n, y�u cau xuat tat ca so nguy�n to tu 1 den n (moi so c�ch 1 khoang trong), neu kh�ng c� so n�o, xuat -1
#include <iostream>
using namespace std;



int main (){
	// tao bien dem: de dem so lan chia het cho so khac
	int n, dem = 0;
	cout << "Nhap vao 1 so nguyen n (n >2): ";
	cin >> n;
	
	for(int i = 3; i <= n; i++){
		
		dem = 0;
		
		if(i%2 != 0){
			//lap de kiem tra xem bien i co chia het cho c�c so tu 1 den i hay khong
			for(int j = 3; j < i; j++){
				if(i % j == 0){
					//dem++;
					dem = dem + 1;
				}
			}
			
			if(dem == 0){
				cout << i << " ";
			}
		}
	}
	
	return 1;
}

//n = 7 (n > 2)
//3 4 5  6 7










//so nguyen to chia het cho 1 va chinh no
// =>
//so nao chia het cho 2 thi khong thoa man dk

