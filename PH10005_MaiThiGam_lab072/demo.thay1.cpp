#include <stdio.h>
#include <string.h>
int main(){
	char maSv[10];
	char hoTen[50];
	printf (" Nhap vao ma sinh vien:");
	gets(maSv);
	printf ("Nhap vao Ho va ten :");
	gets(hoTen);
	printf ("Xin chao:");
	printf ("\nXin Chao :%s",strcat(strcat(maSv," "),hoTen));
	
   return 0;
   }


