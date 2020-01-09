#include <stdio.h>
#include <math.h>

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
	
   
   }


