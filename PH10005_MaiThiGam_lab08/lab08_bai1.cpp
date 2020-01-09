#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	struct SinhVien {
		char maSV[20];
		char tenSV[20];
		char nganhHoc[20];
		float diemTB;
		
	}; struct SinhVien mangSV[10];
	
	int i,n;
	printf ("Nhap so sinh vien muon them: ");
	scanf ("%d",&n);
	
	for (i=0;i<n;i++){
		printf ("==================================================\n");
		printf ("Nhap thong tin sinh vien thu : %d \n",i+1);
		printf ("Nhap MSV: ");fflush(stdin); gets(mangSV[i].maSV);
		printf ("Nhap ho va ten SV: ");fflush(stdin);gets(mangSV[i].tenSV);
		printf ("Nhap nganh hoc : ");fflush (stdin);gets (mangSV[i].nganhHoc);
		printf ("Nhap diem: "); scanf("%f",&mangSV[i].diemTB);
		
	}
	int j;
	for (j=0;j<n;j++){
		printf ("===================================================\n");
		printf ("Thong tin MSV: %s \n",mangSV[j].maSV);
		printf (" Ten: %s\n",mangSV[j].tenSV);
		printf (" Nganh hoc:%s \n",mangSV[j].nganhHoc);
		printf ("Diem:%.0f\n",mangSV[j].diemTB);
		
	}
	
   return 0;
}


