#include <stdio.h>
#include <math.h>
int main(){
   int cn;
   
   printf ("Menu chuong trinh:\n");
   printf ("1.Chuong trinh 1:Tinh trung binh tong.\n");
   printf ("2.Chuong trinh 2:Tim so nguyen to.\n");
   printf ("3.Chuong trinh 3:Tim so chinh phuong.\n");
   printf ("4.Thoat.\n");
   printf ("Moi ban nhap chuong trinh(1,2,3,4):");
   scanf ("%d",&cn);
   
   do {
		if(cn==1){
			printf ("TIM SO TRUNG BINH CONG.\n");
			   int min ,max;
 
			   printf ("Nhap min:");
			   scanf ("%d",&min);
			   printf ("Nhap max:");
			   scanf ("%d",&max);
			   
			   int i=min;
			   float tong=0;
			   int bienDem=0;
			   float trungBinh=0;
			   
			   while (i<=max){
			   	    if(i%2==0){
			   	    	tong+=i;
			   	    	bienDem++;
			//		}else{
					}
					i++;
					   
			   }
			   trungBinh=tong/bienDem;
			   printf ("Trung binh tong cua cac so tu nhien chia het cho 2 la:%.2f",trungBinh);
		break;
		}else if (cn==2){
			printf ("TIM SO NGUYEN TO.\n");
			   int x;
   
			   printf ("Nhap so x la:");
			   scanf ("%d",&x);
			   
			   int i;
			   int count=0;
			   for (i=2;i<x;i++){
			   	    if (x%i==0){
			   	    	count ++;
					   }
			   }if (count==0){
			   	    printf ("%d:la so nguyen to.",x);
			   	    
			   }else {
			   	    printf ("%d:khong phai la so nguyen to.",x);
			   }
		break;
		}else if(cn==3){
			printf ("TIM SO CHINH PHUONG.\n");
				int n;
			    printf("Nhap n = ");
			    scanf("%d", &n);
			    int i = 0;
			    while(i*i <= n){
			        if(i*i == n){
			            printf("%d la so chinh phuong!\n",n);
			            return 0;
			        }
			        ++i;
			    }
			    printf("%d khong phai so chinh phuong!\n", n);
			break;
			    
		}else {
			printf ("THOAT.");
			break;
		}
					   	
   }while(0<cn&&cn<5);
    
}
   


