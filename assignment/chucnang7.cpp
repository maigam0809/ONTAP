#include <stdio.h>
#include <math.h>
#include <string.h>

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

int main(){
	chucNang7();
   return 0;
}


