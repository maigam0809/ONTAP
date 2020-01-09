#include <stdio.h>
#include <math.h>
int tinhChuVi(){
//	  tinh chu vi ,dien tich hinh chu nhat.
   int chieuDai,chieuRong;
    int chuVi;
     
    printf ("Nhap chieu dai:"); scanf("%d",&chieuDai);
    printf ("Nhap chieu rong:"); scanf("%d",&chieuRong);
    
    chuVi=(chieuDai+chieuRong)*2;
    printf ("Chu vi HCN la:%d",chuVi);
    return chuVi;

}
int main(){
    tinhChuVi();
	return 0;
   }


