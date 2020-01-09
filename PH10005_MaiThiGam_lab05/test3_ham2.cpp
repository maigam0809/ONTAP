#include <stdio.h>
#include <math.h>
void nam_nhuan(int year){

	if (year%100==0||year%4==0&&year%100!=0){
			printf ("%d khong la nam nhuan.\n",year);
		}
		
	}else if (year%4==0){
		
		printf ("%d la nam nhuan.\n");
		
	}else{	
		printf ("%d la nam khong nhuan.\n",year);	
	}

int main(){
	int year;


    printf ("-----------------------\n");
	printf ("Nhap so nam :");
	scanf ("%d",&year);
	
	
    nam_nhuan( year);
   return 0;
}


