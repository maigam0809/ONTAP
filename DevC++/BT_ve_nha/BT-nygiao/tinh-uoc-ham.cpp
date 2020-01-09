// nhap so nguyen n 
 //   c, in ra uoc cua so n
#include <stdio.h>

int tinhUoc(int n){
	int uoc,i;
	
	for(i=1;i<=n;i++){
		if(n%i==0);
		printf("Uoc cua n la:%d ",uoc);
	}
	
	return uoc;
}

int main (){
	int uoc=0,n;
	printf("Nhap so nguyen n:%d");
	scanf("%d",& n);
	uoc=tinhUoc(n);
	
	return 1;
}
