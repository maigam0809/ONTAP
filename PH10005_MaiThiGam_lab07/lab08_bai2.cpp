#include <stdio.h>
#include <string.h>

int main(){
	struct SinhVien{
		char maSV[20];
		char tenSV[20];
		char nganhHoc[20];
		float diemTB;
		
	}; struct SinhVien mangSV[50];
	int i,n;
	do{
		printf ("Nhap so sinh vien muon them : ");
		scanf ("%d",&n);
	}while(n<=0);
	
	for (i=0;i<n;i++){
		printf ("=============================================\n");
		printf ("Nhap thong tin sinh vien thu: %d\n",i+1);
		printf ("Nhap MSV: "); fflush (stdin); gets(mangSV[i].maSV);
		printf ("Nhap ten: ");fflush (stdin); gets(mangSV[i].tenSV);
		printf ("Nhap nganh Hoc : "); fflush (stdin); gets(mangSV[i].nganhHoc);
		printf ("Nhap diem : "); scanf ("%f",&mangSV[i].diemTB);
	}
	int j;
	for (i=0; i<n;i++){
		for(j=0;j<n-1;j++){
			if(mangSV[i].diemTB<mangSV[j].diemTB){
			
			struct SinhVien svTemp;
			svTemp=mangSV[i];
			mangSV[i]=mangSV[j];
			mangSV[j]=svTemp;
			
		    }
		}
    }
	int k;
	for (k=0;k<n;k++){
		printf ("\n============SAP XEP SV TANG DAN THU :%d ==================\n",k+1);
		printf ("MSV : %s\n",mangSV[k].maSV);
		printf ("Ten: %s \n",mangSV[k].tenSV);
		printf ("Nganh hoc: %s\n",mangSV[k].nganhHoc);
		printf ("Diem:%.0f \n",mangSV[k].diemTB);
	}
	
   return 0;
}


