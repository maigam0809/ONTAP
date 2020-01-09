#include <stdio.h>
#include <math.h>
// khac phuc tim trang k cho nhap chuoi : thrm ham fflush(stdin)
int main(){
	int age;
	char name[30];
	
	printf ("\nNhap tuoi:"); scanf ("%d",&age);
	fflush (stdin); // ham nay de dan chuoi chay tiep
	printf ("\nNhap ten: "); fgets(name,sizeof name,stdin);
	printf ("%s - %d",name,age);
	
   return 0;
   }


