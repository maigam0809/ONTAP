#include <stdio.h>
#include <string.h>
int main(){
	char s[5][20];//tao mang chuoi
    int i,j;
    printf ("\nNhap 5 chuoi bat ky: \n");
    
    for (i=0;i<5;i++){
    	printf("\nNhap chuoi %d:",i);
    	gets(s[i]);
    	
	}
	char temp[20];
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(strcmp(s[j],s[j+1])>0){
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
				}
		}
	} 
	printf ("\nSap xep thu tu cua cac chuoi:");
	for (i=0;i<5;i++){
	
	printf ("\n Chuoi %d:%s",i,s[i]);
}
   return 0;
   }


