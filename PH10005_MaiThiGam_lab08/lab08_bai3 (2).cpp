#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
		struct SinhVien{
		char maSV[20];
		char tenSV[20];
		char nganhHoc[20];
		float diemTB;	
	};
	struct SinhVien mangSV[10];
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
	
	//SAP SEP
	int j;
	for (i=0; i<n;i++){
		for(j=0;j < n-1; j++){
			if(mangSV[i].diemTB < mangSV[j].diemTB){
			
				struct SinhVien svTemp;
				svTemp=mangSV[i];
				mangSV[i]=mangSV[j];
				mangSV[j]=svTemp;
			
		    }
		}
    }
    // 	TIM KIEM SINH VIEN
    char mssv[20];
	printf ("\n TIM KIEM SINH VIEN THEO MA SO SINH VIEN .\n");
    printf ("Nhap MSSV:"); fflush (stdin);gets(mssv);
   	int bienDem;
    for(i=0; i<n; i++){
    	if (strcmp(mangSV[i].maSV, mssv)==0) {
    		printf ("TIM THAY SINH VIEN: %s.\n",mangSV[i]);
    		bienDem=true;
		}
	}
	
	if(bienDem !=true){
		printf ("Khong tim thay.");
    }
    

   return 0;
}


