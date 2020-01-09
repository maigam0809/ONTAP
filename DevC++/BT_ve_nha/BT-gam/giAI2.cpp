//Bài 1: Nhap 1 so nguyên n, xuat tong tu 1 den n
#include <iostream>
using namespace std;
int main (){
	cout << "nhap 1 so nguyen n :"<< endl;
	
	int a,n,s=0;
	cin>> n;
	
	for(int a=1; a<=n;a++)
	{
		s=s+a;
	}
	
	cout <<"Tong tu 1 den so " << n << " la: " << s << endl;
	return 0;
}
	

