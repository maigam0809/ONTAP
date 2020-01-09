#include <stdio.h>

int checkYear(int year){
	
	int flag=0;
	
	if (year%400==0||year%4==0&&year%100!=0){
		
	    flag=1;
	}	
    return flag;
}
int main(){
   int year, flag;
   
   printf ("Nhap so nam:");
   scanf ("%d",&year);
    
	flag = checkYear(year);
   
   if(flag==1){
   	
		printf ("%d la nam nhuan.",year);
		
    }else{
   		printf ("%d la nam khong nhuan.",year);
	}
    return 0;
}


