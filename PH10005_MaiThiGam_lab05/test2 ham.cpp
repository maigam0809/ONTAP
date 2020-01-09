#include <stdio.h>

// max cua hai so  a va b 
int max1(int so1,int so2){
	return so1>so2 ? so1:so2;
}
//  max cua ba so 
int max(int so1,int so2,int so3){
	int max2= max1( so1,so2);
	int max=max1(max2,so3);
	return max;
// hoac theo cach nay: return max(so1,max(so2,so3)); deu dc 

}
//  min cua hai so 
int min1(int so1,int so2){
    return so1<so2 ? so1:so2;
}
//  min tong cua ba so 
int min(int so1,int so2,int so3){
	return min1(so1,min1(so2,so3));
}

int main(){
	int so1,so2,so3;
	
	printf ("Nhap so thu nhat:");
	scanf ("%d",&so1);
	printf ("Nhap so thu hai:");
	scanf ("%d",&so2);
	printf ("Nhap so thu ba:");
	scanf ("%d",&so3);
	
	
	printf ("Max cua ba so la:%d", max(so1,so2,so3));
	printf ("\nMin cua ba so tu nhien la :%d",min(so1,so2,so3));
	
	return 1;
	
   
   }


