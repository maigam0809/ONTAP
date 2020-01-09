//Viet chuong trình giai phuong trình bac 2: ax^2 + bx + c = 0.
#include <iostream>
#include <math.h> 
 
using namespace std;
 
int main() {
    int a,b,c;
    float x1, x2, delta;
    
    //nhap vao abc
    cout<< "Nhap a: ";
    cin >> a;
    cout<< "Nhap b: ";
    cin >> b;
    cout<< "Nhap c: ";
    cin >> c;
    
    
    //tinh delta
    delta = b*b - 4 * a *c;
    
    if(delta > 0){
    	cout << "Phuong trinh co 2 nghiem la: " <<endl;
    	x1 = (-b + sqrt(delta)) / 2*a;
    	x2 = (-b - sqrt(delta)) / 2*a;
    	cout <<"x1: " << x1 << "\t" << "x2: " << x2;	
	} else if (delta == 0) {
		cout << "Phuong trinh co nghiem la: " <<endl;
		x1 = -b / 2*a;
		cout <<"x1 = x2 = " << x1;
	} else {
		cout << "Phuong trinh vo nghiem";
	}
    
    
    
    
    return 0;
}
