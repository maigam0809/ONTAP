#include <stdio.h>

int main(){
   int x,i;
   int count=0;
   
   printf ("x=");
   scanf ("%d",&x);
   
   for (i=1;i<x;i++){
   	    if (i*i==x){
   	    	count =1;
   	    	break;
   	    	
		   }
   }
   
   if (count==1){
   	printf ("\n Chinh phuong.");
   	
   }else {
   	printf ("\n Khong chinh phuong.");
   }
   
   }


