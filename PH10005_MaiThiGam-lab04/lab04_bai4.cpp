#include <stdio.h>

int main(){
   int cn;
   
   printf("------------------------------\n");
   printf ("Menu chuong trinh:\n");
   printf ("Chuc nang 1:Tinh trung binh tong.\n");
   printf ("Chuc nang 2:Tim so nguyen to.\n");
   printf ("Chuc nang 3:Tim so chinh phuong.\n");
   printf ("Thoat.\n");
   printf("------------------------------\n");
   
    //kiem tra nhap dung sai
   
   do{
   	printf ("Moi ban nhap chuong trinh(1,2,3,4):");
   	scanf ("%d",&cn);
   	
	switch(cn) {
		case 1: {
			printf ("TIM SO TRUNG BINH CONG.\n");
			int min,max;
			int i;
			float tong=0;
			int bienDem = 0;
			float trungBinh = 0;
			
			printf ("Nhap min:");
			scanf ("%d",&min);
			printf ("Nhap max:");
			scanf ("%d",&max);	
			
			i = min;
			
			while (i<=max){
			    if(i%2==0){
			    	tong+=i;
			    	bienDem++;
			//		}else{
				}
				i++;	   
			}
			if(bienDem > 0){
				trungBinh=tong/bienDem;
			}
			
			printf ("Ket qua la: %.2f\n", trungBinh);
			printf("===========================\n");
			break;
		}
		case 2: {
			printf ("TIM SO NGUYEN TO.\n");
			int x;
			int i;
			int count=0;
			
			printf ("Nhap so x: ");
			scanf ("%d",&x);
		
			for (i=2; i<x; i++){
			    if (x%i == 0){
			    	count ++;
				}
			}if (count == 0){
			    printf ("%d la so nguyen to. \n",x);
			    
			}else {
			    printf ("%d khong phai la so nguyen to.\n",x);
			}
			
			printf("===========================\n");
			break;
		}		
		case 3: {
			printf ("TIM SO CHINH PHUONG.\n");
			int n;
			int i = 1;
			
		    printf("Nhap n = ");
		    scanf("%d", &n);
		    
		    while(i*i <= n){
		        if(i*i == n){
		            printf("%d la so chinh phuong!\n",n);
		            return 0;
		        }
		        ++i;
		    }
		    
		    printf("%d khong phai so chinh phuong!\n", n);
		    printf("===========================\n");
			break;
		}	
		case 4: 
			printf ("THOAT.");
			break; 
		}
    } while(cn != 4);
   
   
}



 


