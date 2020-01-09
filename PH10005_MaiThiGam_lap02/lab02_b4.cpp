// nput: Nh?p vào t? bàn phím diem môn Toán, Lý, Hóa
// Output: Hien thi ra màn hình diem trung bình
/*H? s? c?a toán: x3
H? s? c?a lý: x2
H? s? c?a hóa: x1
*/
#include <stdio.h>
int main () {
	float toan,ly,hoa,tb;
	
	printf ("Nhap diem mon Toan: ");
	scanf ("%f",&toan);
	
	printf ("Nhap diem mon Ly: ");
	scanf("%f",&ly);
	
	printf ("Nhap diem mon Hoa: ");
	scanf("%f",&hoa);
	
	tb = ((toan*3)+(ly*2)+hoa)/6;
	
	printf("\n");
	printf ("Diem trung binh cua ba mon = %.2f", tb);
	
	return 0;
}
