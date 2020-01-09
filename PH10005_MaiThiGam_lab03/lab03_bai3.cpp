#include <stdio.h>
#include <math.h>
//day la bai 2.02 //doi ten file lai nua. bai 3 la bai tinh tien dien oki cai nay tu xua c ok r day xoa comment di nua
int main (){
	int a,b,c;
	float delta,x;
	float x1,x2;
	
	printf ("GIAI PHUONG TRINH BAC HAI.\n");
	printf ("Nhap so a :");
	scanf ("%d",&a);
	printf ("Nhap so b :");
	scanf ("%d",&b);
	printf ("Nhap so c :");
	scanf ( "%d",&c);
	

	if (a==0){
		if(b==0){
			if(c==0){
				printf ("Phuong trinh co vo so nghiem.");
			}else{
				printf ("Phuong trinh vo nghiem.");
			}
		}else{
			x=(float)(-c/b);
			printf ("Phuong trinh co nhiem la :%.2f",x);
		}
		
	}else{
		delta = b*b -4*a*c;
		
		if(delta >0){
			x1=(float) ((- b + sqrt(delta)) / (2*a));
			x2=(float) ((- b - sqrt(delta)) / (2*a));
	    	printf ("phuong trinh co hai ngiem la: x1 = %.2f va x2=%.2f ",x1,x2);
			    
		}else if(delta==0){
			x1=x2=-b/ (2*a) ;
			printf ("Phuong trinh co nghiem kep x1 = x2 = %.2f",x1);
			
		}else{
			
			printf ("Phuong trinh vo nghiem.");
		}
	}
}

