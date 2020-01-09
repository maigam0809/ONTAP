#include <stdio.h>
#include <math.h>


void tinhTong1(){
	int a,b,tong;
	printf ("a="); scanf ("%d",&a);
	printf ("b="); scanf ("%d",&b);
	
	tong=a+b;
	printf ("Tong hai so la:",tong);
	
	
	
}
void tinhTong2(int a,int b){
	int tong;
	
	tong=a-b;
	printf ("Tong cua hai so la:%d",tong);
}
int main(){
	int x,y;
	
	printf ("a=");
	scanf ("%d",&x);
	printf ("b=");
	scanf ("%d",&y);
	
	tinhTong2(y,x);
	
   tinhTong1();
   
   }

