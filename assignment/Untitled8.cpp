#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void tinhSoNguyen(){
	int x;
	printf ("============1.TIM SO NGUYEN ===========\n");
	printf ("Nhap so nguyen x:"); 
	scanf ("%d",&x);
	
	if(x==(int)x){
		printf ("%d la so nguyen.",x);
	} else{
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
        }
        ++i;
    }
    printf("\n%d khong phai so chinh phuong!", x);// da xong 1
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

void tinhTienDien(){
	float so;
	float tien;
	
    do{
	printf ("\n==========4.TINH TIEN DIEN============\n");
	printf ("Nhap so dien tieu thu:");
	scanf("%f",&so);
} while(so<0);
		
	if(so < 0){
		printf("Ko hop le.");
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
	float tgoc,ttra,tconlai;
	float tlai;
	 
	do{
		printf ("\n======6.TINH SO TIEN LAI=================\n");
		printf ("\nNhap so tien ban vay:");
		scanf ("%f",&tvay);
	}while(tvay<0);
	printf("%-10s %-15s %-20s %-15s %-15s \n", "Ky Han", "Lai phai tra", "Goc phai tra", "Phai tra", "Con lai");
	tgoc=tvay/12;
	int i=0,j;
	while(i<12){
		tconlai=tvay-(float)i*tgoc;
		tlai=tconlai*0.05;
		ttra=tgoc+tlai;
		i++;
		printf ("%-10d %-15.2f %-20.2f %-15.2f %-15.2f \n",i,tlai,tgoc,ttra,tconlai);
	}	 
}

const long VAY_CO_DINH = 500000000;
const float LAI_SUAT_NAM = 0.072;
const float LAI_SUAT_THANG = LAI_SUAT_NAM / 12;
const int THOI_HAN_NAM = 24;
const int THOI_HAN_THANG = THOI_HAN_NAM * 12;

void chucNang7() {
	int phanTramVay;
	float soTienVay;
	float soTienCo;
	float tienTraHangThang;
	float tongTienPhaiTra;
	float tienLanDau;
	
	do {
		printf("Nhap vao phan tram vay toi da: ");
		scanf("%d", &phanTramVay);
	} while(phanTramVay < 0);
	//tinh so tien vay
	
	soTienVay = (float) VAY_CO_DINH * phanTramVay * 0.01;
	soTienCo =(float) VAY_CO_DINH - soTienVay;

	//tinh tong so tien phai tra
	tongTienPhaiTra = soTienVay * (LAI_SUAT_NAM * THOI_HAN_NAM + 1);
	//tinh tien phai tra moi thang
	tienTraHangThang = tongTienPhaiTra / THOI_HAN_THANG;
	tienLanDau = soTienCo + tienTraHangThang;
	
	printf("\nSo tien phai tra lan dau = %.20f",tienLanDau);
	printf("\nSo tien phai tra hang thang = %.2f",tienTraHangThang);	
}

void chucNang8(){
	struct SinhVien{
		char tenSV[20];
		float diemSV;
		char hocLuc[20];
		
		void inThongTin(){
			printf("\n%-20s %-7.2f %-20s", tenSV, diemSV, hocLuc);
		}
	};
	
	struct SinhVien mangSV[20];
	int i,n;
	printf ("Nhap so Sv ban muon them: ");
	scanf ("%d",&n);
	
	for(i=0;i<n;i++){
	    printf ("Nhap ho va ten SV: "); 
		fflush(stdin);
		gets(mangSV[i].tenSV);
		printf ("Nhap diem sinh vien: ");
		scanf("%f", &mangSV[i].diemSV);
	}
	int j,k;
	
	for(j=0;j<n-1;j++){
		for(k=j+1;k<n;k++){
			struct SinhVien temp;
			if(mangSV[j].diemSV < mangSV[k].diemSV){
				temp=mangSV[j];
				mangSV[j]=mangSV[k];
				mangSV[k]=temp;	
			}
		}
	}
	
	for (k=0;k<n;k++){
		if (mangSV[k].diemSV>=9){
			strcpy(mangSV[k].hocLuc, "Xuat sac");
			
		}else if (mangSV[k].diemSV>=8){
			strcpy(mangSV[k].hocLuc, "Gioi");
			
		}else if (mangSV[k].diemSV>=6.5){
			strcpy(mangSV[k].hocLuc, "Kha");
			
		}else if (mangSV[k].diemSV>=5){
			strcpy(mangSV[k].hocLuc, "Trung binh");
			
		}else{
			strcpy(	mangSV[k].hocLuc, "Yeu");
		}
	}
	
	//in thong tin
	printf("\t\tTHONG TIN SV\n");
	printf("%-20s %-7s %-20s\n", "Ten", "Diem", "Hoc luc");
	for (int i=0;i<n;i++){
		mangSV[i].inThongTin();
	}
}
void chucNang9(){
	int so[2];
	int kq[2];

	for(int i = 0; i < 2; i++){
		do {
			printf("Nhap so %d: ", i+1);
			scanf("%d", &so[i]);
		} while(so[i] < 1 || so[i] > 15 );
	}

	//random from [minN, maxN]
	//https://nguyenvanhieu.vn/sinh-so-ngau-nhien-trong-c-cpp/
	
	for(int i = 0; i < 2; i++){
		kq[i] = 1 + rand() % (15 + 1 - 1);
	}
	int dem = 0;	
	//kiem tra de in ra ket qua
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			if(so[i] == kq[j]){
				dem++;
			}
		}
	}
	
	for(int i = 0; i < 2; i++){
		printf("\nKet qua %d = %02d",i+1, kq[i]);
	}
	
		
	
	if(dem == 0){
		printf("\nChuc ban may man lan sau");
	}else if(dem == 1){
		printf("\nBan da trung giai nhi");
	}else {
		printf("\nBan da trung giai nhat");
	}
}


void chucNang10(){
	int tu1, tu2, mau1, mau2;
	float tong, hieu, tich, thuong;
	printf("Nhap tu so thu 1: ");
	scanf("%d", &tu1);
	do{
		printf("Nhap mau so thu 1: ");
		scanf("%d", &mau1);
		if(mau1==0){
			printf("Nhap sai, yeu cau nhap lai mau so!\n");
		}		
	}while(mau1==0);

	
	printf("Nhap tu so thu 2: ");
	scanf("%d", &tu2);
	do{
		printf("Nhap mau so thu 2: ");
		scanf("%d", &mau2);
		if(mau2==0){
			printf("Nhap sai, yeu cau nhap lai mau so!\n");
		}		
	}while(mau2==0);

	
	tong = (float) (tu1*mau2 + tu2 * mau1) / (mau1 * mau2);
	hieu = (float) (tu1*mau2 - tu2 * mau1) / (mau1 * mau2) ;
	tich = (float) (tu1 * tu2) / (mau1 * mau2);
	thuong = (float) (tu1 * mau2) / (tu2 * mau1) ;
	
	
	printf("\nTong la: %.2f", tong);
	printf("\nHieu la: %.2f", hieu);
	printf("\nTich la: %.2f", tich);
	printf("\nThuong la: %.2f", thuong);
}


int main(){
	int cn,tt;
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
    
	do{
		printf ("Moi ban nhap vao chuc nang can chon (1-10):");
		scanf ("%d",&cn);
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
				chucNang7();
				break;
			case 8:
			   chucNang8();
				break;
			case 9:
				chucNang9();
				break;
			case 10:
				chucNang10();
				break;				
			default:
			    printf ("Ban da nhap sai.")	;
				break;			
		}
	    printf("\nBan co muon tiep tuc chuong trinh khong?");
	    printf("\n1. Co\n2. Khong\n");
	    scanf("%d", &tt);
	    
	    if(tt == 1){
	    	cn = -1;
		}
	} while(cn<0);
   return 0;
}


