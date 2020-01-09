#include <stdio.h>
//   tim ra hai so xem so nao lon nhat.
int max1(int so1,int so2){
	
	return so1>so2 ? so1:so2;
}

// So lon nhat se la so lon hon so con lai.Khi do ta se tim duoc max
int max(int so1,int so2,int so3){

	int t= max1( so1,so2);
	int max=max1(t,so3);
	
	return max;

}
int main(){
	int so1,so2,so3;
	
	printf ("---------------------------\n");
	printf ("Nha so thu nhat:");scanf ("%d",&so1);
	printf ("Nha so thu hai:");scanf ("%d",&so2);
	printf ("Nha so thu ba:");scanf ("%d",&so3);
	
	printf ("So lon nhat la:%d",max(so1,so2,so3));

   return 0;
   }


