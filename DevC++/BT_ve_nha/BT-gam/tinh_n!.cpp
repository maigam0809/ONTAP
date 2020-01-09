//Nhap vào 1 so nguyên n, xuat ra n!
#include <iostream>
 
using namespace std;
 
int main (){
	// tao bien dem: de dem so lan chia het cho so khac
	int n, S = 1;
	cout << "Nhap vao 1 so nguyen n: ";
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		S = S * i;
		//S*=i;
	}
	
	cout << n << "! = " << S;
	return 1;
}

//n! = n * (n -1) * ...  1
//   = 1 * .... * n
