#include <stdio.h>
#include <math.h>

int tinhSoNguyen(){
	int x;
	printf ("============1.TIM SO NGUYEN ===========\n");
	printf ("Nhap so nguyen x:"); scanf ("%d",&x);
	
	if(x==(int)x){
		printf ("%d la so nguyen.",x);
	}else{
	    printf ("%d khong la so nguyen",x);
	}	
	if (x<2){
		printf ("\n khong phai so nguyen to.",x);
	}
	int bienDem=0;	
	for (int i=2;i<=sqrt(x);i++){
		if(x%i==0)
		bienDem++;	
	}
	if(bienDem==0){
		printf ("\n%d la so nguyen to.",x);
	}else{
		printf ("\n%d khong phai so nguyen to.",x);
	}	
	//  xet xem so do co phai so chinh phuong hay khong
	int i = 0;
    while(i*i <= x){
        if(i*i == x){
            printf("\n%d la so chinh phuong!", x);
            return 0;
            
        }
        ++i;
      
    }
    printf("\n%d khong phai so chinh phuong!", x);// da xong 1
    return 1;
}
int tinhUoc(int a,int b){
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
void tinhTienQuanKaraoke(){
	float batDau;
	float ketThuc;
	do{
		
	printf ("\n==========3.TIEN QUAN KARAOKE========\n");
	printf ("Gio bat dau:"); scanf ("%f",&batDau);
	printf ("Gio ket thuc:"); scanf ("%f",&ketThuc);
	
	}while(batDau<14||batDau>23||ketThuc>23||ketThuc<14||batDau>=ketThuc);
	
	// vi luc nay thi a < b
	float gioHat=ketThuc-batDau; 
	float tien=0;
	
	if (gioHat<4){
		tien=gioHat*50000;
	}   
     if(gioHat>=4){
     	//" Hat Tren 4 h thi se duoc giam 30%.\n ;
    	tien=gioHat*50000*0.7;
	} 
	//kiem tra gio bat dau 14 - 17
	if (batDau>=14 && batDau<=17){
		//"Neu gio bat dau tu 14-17h duoc giam them 10% nua.\n "
		tien=tien*0.9;
	}
	 printf (" So tien phai tra = %.0f",tien);

}
int tinhTienDien(){
	float so;
	float tien;
	
    do{
	printf ("\n==========4.TINH TIEN DIEN============\n");
	printf ("Nhap so dien tieu thu:");
	scanf("%f",&so);
} while(so<0);
		
	if(so < 0){
		printf("Ko hop le.");
	    return 1;
	} else if (so<=50){
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
		tien=50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + 100*2.834 + (so-400)*2.937;
	}
	
	printf ("Tien phai tra la: %.1f",tien);
	return 1;
}
void tinhDoiTien(){
	int tien;
	printf ("Nhap so tien ban muon doi :");
	scanf ("%d",&tien);
	
	int mangTien[9]={500,200,100,50,20,10,5,2,1};
	
	int mangSoTo[9]={0,0,0,0,0,0,0,0,0};
    int i=0;
    
	while (tien>0){
		mangSoTo[i]=tien/mangTien[i];
		tien=tien % mangTien[i];
		i++;
	}	
	for(int j = 0;j <9 ; ++j){
		if(mangSoTo[j]>0){
		
        printf("So to %d = %d\n",mangTien[j],mangSoTo[j]);
        }
    }
}
void tinhTienLai(){
	float tvay;
	float tgoc,ttra;
	float tlai;
	 
	do{
		printf ("\n======6.TINH SO TIEN LAI=================\n");
		printf ("\nNhap so tien ban vay:");
		scanf ("%f",&tvay);
	}while(tvay<0);
	printf ("\nKy Han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai\n");
	
	tgoc=tvay/12;
	int i,j;
	for(i=1;i<=12;i++){
		tlai=tvay*0.05;
		ttra=tgoc+tlai;	
		tvay=tvay-tgoc;	
		if (tvay<1000)tvay=0;
		printf ("%d\t%.0f\t\t%.0f\t\t\t%.0f\t\t%.0f\n",i,tlai,tgoc,ttra,tvay);
	}	 
}

int main(){
	int cn;
	printf ("+-------------------------------------------------------------------+\n");
	printf ("Chon chuc nang ma ban can tinh ?                                    +\n");
	printf ("1. Kiem tra so nguyen.                                              +\n");
	printf ("2. Chuong trinh tinh UCNN va BCNN.                                  +\n");
	printf ("3. Chuong trinh tinh Tien cho quan Karaoke .                        +\n");
	printf ("4. Tinh tien Dien.                                                  +\n");
	printf ("5. Doi tien.                                                        +\n");
	printf ("6. Xay dung chuc nang tinh Lai suat vay Ngan Hang.                  +\n");
	printf ("7. Xay dung chuong trinh vay tien mua xe.                           +\n");
	printf ("8. Sap xep thong tin sinh vien.                                     +\n");
	printf ("9. Xay dung Game FPOLY-LOTT (2/15).                                 +\n");
	printf ("10. Xay dung chuong trinh tinh toan Phan so.                        +\n");
	printf ("+-------------------------------------------------------------------+\n");
	printf ("Moi ban nhap vao chuc nang can chon (1-10):");
    scanf ("%d",&cn);
	do{
	switch (cn){
		case 1:
			tinhSoNguyen();
			break;
		case 2:{
			int x,y;
			
			printf ("\n=========2.TIM UCLN VA BCNN=============\n");
			printf ("Nhap x="); scanf ("%d",&x);
			printf ("Nhap y="); scanf ("%d",&y);
			
			float boiChung=(x*y)/tinhUoc(x,y);
			
			printf ("UCLN =%d.\n",tinhUoc(x,y));
			printf ("BCNN =%.1f  .\n",boiChung);
			break;	
			}
		case 3:
			tinhTienQuanKaraoke();
			break;
		case 4:
		    tinhTienDien();
			break;
		case 5:
			tinhDoiTien();
			break;
		case 6:
		    tinhTienLai();
			break;
		case 7:
			printf ("Chuc nang 7: Xay dung chuong trinh vay tien mua xe.");
			break;
		case 8:
		    printf ("Chuc nang 8: Sap xep thong tin sinh vien.");
			break;
		case 9:
			printf ("Chuc nang 9: Xay dung Game FPOLY-LOTT (2/15).");
			break;
		case 10:
			printf ("Chuc nang 10: Xay dung chuong trinh tinh toan Phan so.");
			break;				
		default:
		    printf ("Ban da nhap sai.")	;
			break;			
	    }
	}while(cn<0);
   return 0;
}


