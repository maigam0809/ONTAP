//Bài 2: Nhap 1 so nguyên n, xuat tong các so le tu 1 den n
//xuat tong cac so chia het cho 3

# include <iostream>
using namespace std;

int main (){
	
	cout << "Nhap 1 so nguyen n:"<< endl;
	
    int a,n,s;
    cin >> n;
    
    /*
    truong hop nay chi dung cho bai nay
    for (int a=1; a <= n; a=a+2){
		s= s+a;
	}
	*/
	
	for (int a=1; a <= n;a++){
		//neu la so le: so le khong chia het cho 2
		if(a % 2 == 1){
			s= s+a;
		}	
	}
		
	cout << "Tong cac so le tu 1 den "<< n <<" la: "<< s <<endl;	
	
	
	return 1;
}
