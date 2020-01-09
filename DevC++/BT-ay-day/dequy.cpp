#include <iostream>
 
using namespace std;
 
int tinhGiaiThua(int n) {
    if (n == 1){
    	return 1;
	}
	 else {
    	return (n * tinhGiaiThua(n - 1));
	}
       
}
  
int main() {
    cout << "Giai thua cua 5 la:" << tinhGiaiThua(5);
    return 0;
}


/*

5 * tinhGiaiThua(4) = 5 * 24 = 120;
tinhGiaiThua(4  = 4 * tinhGiaiThua(3) = 4 * 6 = 24
tinhGiaiThua(3) = 3 * tinhGiaiThua(2) = 2 * 2 = 6
tinhGiaiThua(2) = 2 * tinhGiaiThua(1) = 2 * 1 = 2


*/

