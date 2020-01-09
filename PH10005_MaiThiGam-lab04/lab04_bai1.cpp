#include <stdio.h>

int main(){
   int min ,max;
   float tong=0;
   int bienDem=0;
   float trungBinh=0;
   
   printf ("Tinh trung binh cong cua cac so chia het cho 2!\n");
   printf ("-----------\n"); 
   printf ("Nhap min:");
   scanf ("%d",&min);
   printf ("Nhap max:");
   scanf ("%d",&max);
   
   int i=min;
   
   while (i<=max){
   	    if(i%2==0){
   	    	tong+=i;
   	    	bienDem++;
//		}else{ 
		}
		i++;
		
   }
   trungBinh=tong/bienDem;
   printf ("Ket qua la:%.2f",trungBinh);
   
   }


