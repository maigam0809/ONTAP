// nput: Nh?p v�o t? b�n ph�m diem m�n To�n, L�, H�a
// Output: Hien thi ra m�n h�nh diem trung b�nh
/*H? s? c?a to�n: x3
H? s? c?a l�: x2
H? s? c?a h�a: x1
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
