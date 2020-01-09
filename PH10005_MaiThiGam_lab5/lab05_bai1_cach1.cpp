#include <stdio.h>
#include <math.h>
void max(int so1,int so2,int so3){
	int max;
	
	so1=max;
	
	if (so2>max){
	    max=so2;
	}
	if(so3>max){
	    max=so3;
	}
	printf("So lon nhat la:%d",max);
}

int main(){
	int so1,so2,so3;
	
	printf("---------------------------------\n");
	printf ("Nhap so thu nhat:");scanf ("%d",&so1);
	printf ("Nhap so thu hai:");scanf ("%d",&so2);
	printf ("Nhap so thu ba:");scanf ("%d",&so3);
	
	max(so1,so2,so3);

   return 0;
}


