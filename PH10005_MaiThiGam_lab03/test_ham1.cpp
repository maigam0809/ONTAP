#include <stdio.h>
#include <math.h>
void tinhHocLuc();
void tinhBac1();
void tinhBac2();

int main(){
//	neu cho k la so chuc nang can xet
	int k;  
	float n;
	int a,b;
	
	printf ("Moi ban nhap chuong trinh can tinh:\n");
	printf ("1.Phuong trinh tinh hoc luc cua sinh vien.\n");
	printf ("2.Phuong trinh tinh phuong trinh bac 1.\n");
	printf ("3.Phuong trinh tinh phuong trinh bac 2.\n");
	printf ("4.Phuong trinh tinh tien dien.");
	printf ("Moi ban nhap chon chuong trinh can tinh\n");
	scanf ("%d",&k);
	
	
	switch (k){
		
		case 1:
		    tinhHocLuc();
		
			break;
		case 2:
		    tinhBac1();
		    
			break;
		case 3:
		    tinhBac2();
		    
			break;
						
		default :
			printf ("Moi ban nhap lai");
			break;
   	}
    return 0;
}
   
void tinhHocLuc(){
	float n;
	printf ("Nhap  diem so :");
	scanf ("%f",&n);
	if (n>=9){
		printf("Hoc luc xuat sac.");
		
	}else if( n>=8) {
	    printf("Hoc luc gioi.");
	}else if( n>=6.5) {
	    printf("Hoc luc kha.");
	}else if( n>=5) {
	    printf("Hoc luc trung binh.");
	}else if( n>=3.5) {
	    printf("Hoc luc yeu.");
	}else  {
	    printf("Hoc luc kem.");  
	}
}
void tinhBac1(){
	float  a,b;

	printf ("Nhap so a =");
	scanf ("%f",&a);
	
	printf ("Nhap so b =");
	scanf("%f",&b);
	
	if(a==0){
		if(b==0){
			printf ("Phuong trinh vo so nghiem.");
			
		}else{
			printf ("Phuong trinh vo nghiem.");
			
		}
    }else{
	 printf ("Phuong trinh co nghiem la x = %f",-b/a);
	 
    }
    
}
void tinhBac2(){
	int a,b,c;
	float denta,x;
	float x1,x2;
	printf ("GIAI PHUONG TRINH BAC HAI.\n");
	printf ("Nhap so nguyen a :");
	scanf ("%d",&a);
	printf ("Nhap so nguyen b :");
	scanf ("%d",&b);
	printf ("Nhap so nguyen c :");
	scanf ( "%d",&c);
	
	denta = b*b -4*a*c ;
	if (a==0){
		if(b==0){
			if(c==0){
				printf ("Phuong trinh vo so nghiem.");
			}else{
				printf ("PHuong trinh vo nghiem.");
			}
		}else{
			x=(float)(-c/b);
			printf ("Phuong trinh co nhiem la :%.2f",x);
		}
		
	}
	if(a!=0){
		
		if(denta >0){
			x1=(float) ((- b + sqrt(denta))/2*a);
			x2=(float) ((- b - sqrt(denta))/2*a);
	    printf ("phuong trinh co hai ngiem la: x1 = %.2f va x2=%.2f ",x1,x2);
			    
		}else if(denta==0){
			x1=x2=-b/2*c;
			printf ("Phuong trinh co nghiem kep x1 = x2 = %.2f",x1);
			
		}else{
			
			printf ("Phuong trinh vo nghiem.");
		}
	}
}
void tinhTienDien(){
	
}


