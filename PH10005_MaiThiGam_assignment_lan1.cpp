#include <stdio.h>

int main(){
	int cn;
	
	printf ("Chon chuc nang ma ban can tinh ?\n");
	printf ("1.Chuc nang 1: Kiem tra so nguyen.\n");
	printf ("2.Chuc nang 2: Tim Uoc so chung va Boi so chung cua hai so.\n");
	printf ("3.Chuc nang 3: Chuong trinh tinh Tien cho quan Karaoke .\n");
	printf ("4.Chuc nang 4: Tinh tien Dien.\n");
	printf ("5.Chuc nang 5: Doi tien.\n");
	printf ("6.Chuc nang 6: Xay dung chuc nang tinh Lai suat vay Ngan Hangvay tra gop.\n");
	printf ("7.Chuc nang 7: Xay dung chuong trinh vay tien mua xe.\n");
	printf ("8.Chuc nang 8: Sap xep thong tin sinh vien.\n");
	printf ("9.Chuc nang 9: Xay dung Game FPOLY-LOTT (2/15).\n");
	printf ("10.Chuc nang 10: Xay dung chuong trinh tinh toan Phan so.\n");
	printf ("\n");
	
	printf ("Moi ban nhap vao chuc nang can chon (1-10):");
	scanf ("%d",&cn);
	
	switch (cn){
		case 1:
			printf ("Chuc nang 1: Kiem tra so nguyen.");
			break;
		case 2:
			printf ("Chuc nang 2: Tim Uoc so chung va Boi so chung cua hai so.");
			break;	
		case 3:
			printf ("Chuc nang 3: Chuong trinh tinh Tien cho quan Karaoke.");
			break;
		case 4:
			printf ("Chuc nang 4: Tinh tien Dien.");
			break;
		case 5:
			printf ("Chuc nang 5: Doi tien.");
			break;
		case 6:
			printf ("Chuc nang 6: Xay dung chuc nang tinh Lai suat vay Ngan Hangvay tra gop.");
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
   return 1;
   }


