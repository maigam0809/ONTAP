#include <stdio.h>
#include <math.h>

int main(){
	int k;
	float n;
	
	printf ("Moi ban nhap chuong trinh can tinh:\n");
	printf ("1.Phuong trinh tinh hoc luc cua sinh vien.\n");
	printf ("2.Phuong trinh tinh phuong trinh bac 1.\n");
	printf ("3.Phuong trinh tinh phuong trinh bac 2.\n");
	printf ("Moi ban nhap chon chuong trinh can tinh:");
	scanf ("%d",&k);
	
	switch (k){
		case 1:
				float n;
				printf ("Nhap  diem so:");
				scanf ("%f",&n);
			
				if(n > 10 || n < 0){
					printf("Khong hop le");	
				} else if (n>=9){
					printf("Hoc luc xuat sac.");	
				} else if(n<9 && n>=8) {
				    printf("Hoc luc gioi.");
				} else if(n<8 && n>=6.5) {
				    printf("Hoc luc kha.");
				}else if(n<6.5 && n>=5) {
				    printf("Hoc luc trung binh.");
				}else if(n<5 && n>=3.5) {
				    printf("Hoc luc yeu.");
				}else  {
				    printf("Hoc luc kem.");  
				}
			
			break;
		case 2:
			float  i,j;

			printf ("Nhap so i =");
			scanf ("%f",&i);
			
			printf ("Nhap so j =");
			scanf("%f",&j);
			
			if(i==0){
				if(j==0){
					printf ("Phuong trinh vo so nghiem.");
					
				}else{
					printf ("Phuong trinh vo nghiem.");
					
				}
		    }else{
			 printf ("Phuong trinh co nghiem la x = %f",-j/i);
			 
		    }
		    break;
		case 3:
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
			break;
		case 4:
		    float so;
			float tien;
		    
			printf ("Nhap so tien dien tieu thu la:");
			scanf("%f",&so);
			if (0<=so&&so<=50){
				tien=so*1678;
			
				
			}else if(so<=100){
				tien=50*1678+(so-50)*1734;
			
				
			}else if(so<=200){
				tien=50*1678+50*1734+(so-100)*2014;
			
				
			}else if(so<=300){
				tien=50*1678+50*1734+100*2014+(so-200)*2536;
			
				
			}else if(so<=400){
				tien=50*1678+50*1734+100*2014+100*2536+(so-300)*2834;
			
				
			}else {
				tien=50*1678+50*1734+100*2014+100*2536+100*2834+(so-400)*2937;
				
			}
				printf ("Tien phai tra la: %.2f",tien);	
			break;	
		
		default :
			printf ("Ban nhap sai roi!Moi ban nhap lai");
			break;
   	}
    
	
   return 1;
}




