#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	
	printf ("Xin moi nhap vao chuoi:");
	gets(s);
	strlwr(s); // ham cho biet in hoa hay khong deu tra ve gia tri .
	
	int nguyenAm = 0;
	int phuAm = 0;
	int dauCach = 0;
	
	for(int i=0;i<strlen(s);i++){
		if (s[i]=='u'||s[i]=='e'||s[i]=='o'||s[i]=='a'||s[i]=='i'){
			nguyenAm++;
			
		}else if(s[i]==' ') {
			dauCach++;
			
		}else{
			phuAm++;
		}
	}
	printf ("Chuoi vua nhap co:\n %d : nguyen am.\n %d: dau cach.\n %d : phu am.\n ",nguyenAm,dauCach,phuAm);
	
   return 0;
}


