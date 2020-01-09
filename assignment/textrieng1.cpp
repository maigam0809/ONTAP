#include <stdio.h>
#include <string.h>
int main(){
	char user[10];
	char pass[10];
	printf ("Moi nhap vao username :");
	gets(user);
	printf ("Moi ban nhap vao pass:");
	gets (pass);
	char userSys[]="admin";
	char passSys[]="12345";
	strlwr(user);
	printf ("%s    ......%s\n",user,pass);
	/*if (user==userSys &&pass==passSys){
		printf ("Dang nhap thanh cong");
	}else{  // cai
		printf ("Dang nhap khong thanh cong.");
	}*/
	if (strcmp(userSys,user)==0&&strcmp(pass,passSys)==0){
		printf ("Dang nhap thanh cong");
	}else{
		printf ("Dang nhap khong thanh cong.");
	}
	
   return 0;
   }


