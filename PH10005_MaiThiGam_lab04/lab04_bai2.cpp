#include <stdio.h>

int main(){
   int x;
   
   printf ("Nhap so x la:");
   scanf ("%d",&x);
   
   int i;
   int count=0;
   
   for (i=2;i<x;i++){
   	    if (x%i==0){
   	    	count ++;
		   }
		   
   }if (count==0){
   	    printf ("%d la so nguyen to.",x);
   	    
   }else {
   	    printf ("%d khong phai la so nguyen to.",x);
   }
   
   }


