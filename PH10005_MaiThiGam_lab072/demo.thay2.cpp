#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	printf ("Xin moi nhap vao chuoi:");
	fflush(stdin);
	gets(s);
	strlwr(s);
	int i=0;
	int nguyenAm;// nguyen am
	int phuAm;// phu am
	int dauCach;// dau cach
	while (s[i++]!='0'){
		if (s[i]=='u'||s[i]=='e'||s[i]=='o'||s[i]=='a'||s[i]=='i'){
			na++;
			
		}else {
			pa++;
			
		}
	}
	printf ("Nhap ra chuoi co %d nguyen am va  %d phu am ",na,pa);
   return 0;
   }


