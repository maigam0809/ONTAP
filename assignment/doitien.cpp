#include <stdio.h>
#include <math.h>
#include <string.h>
int tinhDoiTien(){
	int x;
	do{
	
	printf ("\n=============5.DOI TIEN==============\n");
	printf ("Nhap so tien can doi: ");
	scanf ("%d",&x);
	}while(x<1);
	int m500=x/500000;
	int m200=(x-m500*500000)/200000;
	int m100=(x-m500*500000-m200*200000)/100000;
	int m50 =(x-m500*500000-m200*200000-m100*100000)/50000;
	int m20 =(x-m500*500000-m200*200000-m100*100000-m50*50000)/20000;
	int m10 =(x-m500*500000-m200*200000-m100*100000-m50*50000-m20*20000)/10000;
	int m5  =(x-m500*500000-m200*200000-m100*100000-m50*50000-m20*20000-m10*10000)/5000;
	int m2  =(x-m500*500000-m200*200000-m100*100000-m50*50000-m20*20000-m10*10000-m5*5000)/2000;
	int m1  =(x-m500*500000-m200*200000-m100*100000-m50*50000-m20*20000-m10*10000-m5*5000-m2*2000)/1000;
	printf ("Da doi la:",x);
	if(m500>0){
		printf ("\n%d to 500k.",m500);	
	}
	if(m200>0){
		printf ("\n%d to 200k.",m200);
	}
	if(m100>0){
		printf ("\n%d to 100k.",m100);
	}
	if(m50>0){
		printf ("\n%d to 50k.",m50);
	}
	if(m20>0){
		printf ("\n%d to 20k.",m20);
		}
	if(m10>0){
		printf ("\n%d to 10k.",m10);
	}
	if(m5>0){
		printf ("\n%d to 5k.",m5);
	}
	if(m2>0){
		printf ("\n%d to 2k.",m2);
	}
	if(m1>0){
		printf ("\n%d to 1k.",m1);
	}
	return 1;
}
int main(){
	tinhDoiTien();
   return 0;
   }


