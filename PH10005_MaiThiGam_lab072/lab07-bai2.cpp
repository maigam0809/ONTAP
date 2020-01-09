#include <stdio.h>
#include <string.h>

int main(){
	char userSys[]="admin";
	char passSys[]="12345";
	char user[10];
	char pass[10];
	
	printf ("Nhap username : ");gets(user);
	printf ("Nhap pass: "); gets(pass);
	
	strlwr(pass);
	strlwr(user);
	
	if (strcmp(userSys,user)==0&&strcmp(passSys,pass)==0){
		printf ("Dang nhap thanh cong.");
	}else {
		printf ("Dang nhap that bai.");
	}
	
   return 0;
}


