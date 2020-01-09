#include <stdio.h>

void hoanVi(int *a,int *b){
	int temp;
	
	printf("Ham con, truoc khi goi ham hoan vi, a = %d, b = %d\n", *a , *b);
	
	temp =*a;
	*a=*b;
	*b=temp;
	
	printf("Ham con, sau khi goi ham hoan vi, a = %d, b = %d\n", *a , *b);
	}
	
int main(){
   int a,b;
   printf ("-----------------------------------------------------\n");
   printf ("Nhap a:");
   scanf ("%d",&a);
   printf ("Nhap b:");
   scanf ("%d",&b);
   
   printf("Ham main, truoc khi goi ham hoan vi, a = %d, b = %d\n", a , b);
   
   hoanVi(&a,&b);
   printf("Ham main, sau khi goi ham hoan vi, a = %d, b = %d\n", a , b);
    
   
   
   }
   
   //thay yeu cau viet may cai printf kia ak em tu viet thoi
   //uk bai nay khong co gi de sua
   //nhung 2 bai truoc e phai sua
   


