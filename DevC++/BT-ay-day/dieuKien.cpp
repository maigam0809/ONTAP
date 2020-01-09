#include <iostream>  
using namespace std;  
    
int main () {  
	int num;  
	
	cout << "Nhap vao so nguyen: ";
	cin >> num; 
	
	if( num % 2 == 0 || num % 5 == 0 && num > 0){
		cout << "la so chan";
	} else {
		cout << "la so le";
	}
 
   return 0;  
}

//nhap vao 1 so nguyen. 
//kiem tra no la so chan hay so le.
//neu la so chan thi in ra ma hinh la so chan
//neu la so le thi in ra man hinh la so le 



