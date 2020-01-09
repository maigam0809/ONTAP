#include <stdio.h>
#include <math.h>
int main(){
	int k;
	
	printf ("Moi ban lua chon chuong trinh can tinh:\n");
	printf ("1. Chuong trinh tinh hoc luc cua sinh vien.\n");
	printf ("2. Chuong trinh tinh phuong trinh bac 1.\n");
	printf ("3. Chuong trinh tinh phuong trinh bac 2.\n");
	printf ("4. Chuong trinh tinh tien dien.\n");
	printf ("\n");
	printf ("Moi ban nhap vao chuong trinh can tinh(1,2,3,4):");
	scanf ("%d",&k);
	
	
	switch (k){
		
		case 1:
			printf ("TINH HOC LUC CUA SINH VIEN.\n");
			float n;

			printf ("Nhap  diem so:");
			scanf ("%f",&n);
		
			if(n > 10 || n < 0){
				printf("Khong hop le.");	
				
			} else if (n>=9){
				printf("Hoc luc xuat sac.");
					
			} else if(n>=8) {
			    printf("Hoc luc gioi.");
			    
			} else if(n>=6.5) {
			    printf("Hoc luc kha.");
			    
			}else if(n>=5) {
			    printf("Hoc luc trung binh.");
			    
			}else if(n>=3.5) {
			    printf("Hoc luc yeu.");
			    
			}else  {
			    printf("Hoc luc kem.");  
			    
			}
	        break;
	
	    case 2:
	    	printf (" TINH PHUONG TRINH BAC MOT.\n");
	    	float  a1,b1;

			printf ("Nhap a1 =");
			scanf ("%f",&a1);
			
			printf ("Nhap b1 =");
			scanf("%f",&b1);
			
			if(a1==0){
				if(b1==0){
					printf ("Phuong trinh co vo so nghiem.");
					
				}else{
					printf ("Phuong trinh vo nghiem.");
					
			    } 
		    }else{
			 printf ("Phuong trinh co nghiem la x = %.2f",-b1/a1);
			 
		    }
	    break;
	    
	    case 3:
	    	printf ("GIAI PHUONG TRINH BAC HAI.\n");
	    	
	    	int a,b,c;
			float delta,x;
			float x1,x2;
			
			printf ("Nhap so nguyen a :");
			scanf ("%d",&a);
			printf ("Nhap so nguyen b :");
			scanf ("%d",&b);
			printf ("Nhap so nguyen c :");
			scanf ( "%d",&c);
			
			
			if (a==0){
				if(b==0){
					if(c==0){
						printf ("Phuong trinh vo so nghiem.");
					}else{
						printf ("Phuong trinh vo nghiem.");
					}
				}else{
					x=(float)(-c/b);
					printf ("Phuong trinh co nhiem la :%.2f",x);
				}	
		    }else{
		    	delta = b*b -4*a*c ;
				if(delta >0){
					x1= (float) ( (- b + sqrt(delta)) / (2*a) );
					x2= (float) ( (- b - sqrt(delta)) / (2*a) );
			    printf ("Phuong trinh co hai ngiem la: x1 = %.2f va x2=%.2f ",x1,x2);
					    
				}else if(delta==0){
					x1=x2=-b/(2*a);
					printf ("Phuong trinh co nghiem kep x1 = x2 = %.2f",x1);
					
				}else{
					
					printf ("Phuong trinh vo nghiem.");
			    }
			} 
			break;
			
		case 4:
		    float so;
			float tien;
		    //tu sua lai r ktra lai nhe v 
			if (so>0){
			
			    if (so<=50){
					tien=so*1678;
					
					
				}else if(so<=100){
					tien=50*1678 + (so-50)*1734;
				
				
				}else if(so<=200){
					tien=50*1678 + 50*1734 + (so-100)*2014;
					
						
				}else if(so<=300){
					tien=50*1678 + 50*1734 + 100*2014 + (so-200)*2536;
					
						
				}else if(so<=400){
					tien=50*1678 + 50*1734 + 100*2014 + 100*2536 + (so-300)*2834;
					
						
				}else {
					tien=50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (so-400)*2937;
				}
					printf ("Tien phai tra la: %.2f",tien);
			
			}else{
				printf ("Ban da nhap sai.");
			}
				break;
				
		default :
		    printf ("Ban da nhap sai.");
			break;		
   }
        return 1;
   }
    


