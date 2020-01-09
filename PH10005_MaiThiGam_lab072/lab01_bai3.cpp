#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	char s[5][20];
	int i,j;
	
	// nhap 5 chuoi tu ban phim la
	for(i=0;i<5;i++)
	{
		printf("Chuoi thu %d: ",i+1);
		gets(s[i]);
		strlwr(s[i]);
	}
	
	char temp[20];
    for (i=1;i<5;i++){
    	for(j=1;j<5;j++){
    		if (strcmp (s[j-1],s[j])>0){
    		strcpy(temp,s[j-1]);
    		strcpy(s[j-1],s[j]);
    		strcpy(s[j],temp);
		}
	}
}
    printf ("\nSap xep theo chu cai dau la: ");
    for(i=0;i<5;i++){
    	printf ("\nChuoi %d :%s", i+1, s[i]);
	}
   return 0;
   }


