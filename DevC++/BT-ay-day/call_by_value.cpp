#include <iostream>
 
using namespace std;
 
/* khai bao prototype */
void swap(int *x, int *y);
int changeValue(int x);
  
int main() {
    // dinh nghia cac bien local
    int a = 100;
    int b = 200;

  
    cout << "Truoc swap, gia tri cua a : " << a << endl;
    cout << "Truoc swap, gia tri cua b : " << b << endl;
  
    // goi ham swap() de hoan doi cac gia tri
    swap(&a, &b);
  
    cout << "Sau swap, gia tri cua a : " << a << endl;
    cout << "Sau swap, gia tri cua b : " << b << endl;
  
    return 0;
}

/* 
 * ham hoan doi cac gia tri 
 */
void swap(int *x, int *y) {
    int temp;
 
    temp = *x;
    *x = *y;
    *y = temp;
 
    return;
}

