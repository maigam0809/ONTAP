#include <stdio.h>
#include <math.h>
int main(){
   int  cn;
   
   printf ("Menu chuc nang :\n");
   printf ("1.Chuong trinh 1:Tinh trung binh tong.\n");
   printf ("2.Chuong trinh 2:Tim so nguyen to.\n");
   printf ("3.Chuong trinh 3:Tim so chinh phuong.\n");
   printf ("4.Thoat.\n");
   printf ("Moi ban nhap chuong trinh(1,2,3,4):");
   scanf ("%f",&cn);
   do{
   	printf ("Moi ban nhap chuong trinh(1,2,3,4):");
   	scanf ("%d",&cn);
   	
    switch (cn){
   	    case 1:{
			int min ,max;
		   	int tong;
			int bienDem=0;
			float trungBinh=0;
		 
		    printf ("\nNhap min:");
		    scanf ("%d",&min);
			printf ("\nNhap max:");
			scanf ("%d",&max);
				   
			int i=min;
				    
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
	        printf("===========================\n");
					  
			 break;
	    }
	    case 2:{
				
			int x;
				  
		   
			printf ("Nhap so x la:");
			scanf ("%d",&x);
				   
			int n;
			int count=0;
			for (n=2;n<x;n++){
				if (x%n==0){
				   	count ++;
			    }
			}if (count==0){
				printf ("%d:la so nguyen to.",x);
				   	    
				}else {
				printf ("%d:khong phai la so nguyen to.",x);
				}
			printf("===========================\n");
				break;
			}
			case 3:{
			
			    int b;
				printf("Nhap b = ");
				scanf("%d", &b);
				int i = 0;
				while(i*i <= b){
				    if(i*i == b){
				        printf("%d la so chinh phuong!\n",b);
				        return 0;
				    }
				    ++i;
				}
			    printf("%d khong phai so chinh phuong!\n", b); 
			    printf("===========================\n"); 
				break;
				}
			case 4:
				    printf ("Thoat.");	
				    break;
	}
	}while(cn!=4);
}

	

	


