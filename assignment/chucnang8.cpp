#include <stdio.h>
#include <math.h>
#include <string.h>
void sapXepSV(){
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
			strcpy(	mangSV[k].hocLuc, "Xuat sac");
			
		}else if (mangSV[k].diemSV>=8){
			strcpy(	mangSV[k].hocLuc, "Gioi");
			
		}else if (mangSV[k].diemSV>=6.5){
			strcpy(	mangSV[k].hocLuc, "Kha");
			
		}else if (mangSV[k].diemSV>=5){
			strcpy(	mangSV[k].hocLuc, "Trung binh");
			
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

int main(){
sapXepSV();
   return 0;
}


