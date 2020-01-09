#include <stdio.h>
#include <math.h>
#include <string.h>
void doiTien(){
	int tien;
	printf ("Nhap so tien ban muon doi :");
	scanf ("%d",&tien);
	
	int mangTien[9]={500,200,100,50,20,10,5,2,1};
	
	int mangSoTo[9]={0,0,0,0,0,0,0,0,0};
    int i=0;
    
	while (tien>0){
		mangSoTo[i]=tien/mangTien[i];
		tien=tien % mangTien[i];
		i++;
	}	
	for(int j = 0;j <9 ; ++j){
		if(mangSoTo[j]>0){
		
        printf("So to %d = %d\n",mangTien[j],mangSoTo[j]);
        }
    }
}

int main(){
	doiTien();
   return 0;
   }


