#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	char name[30];
	printf ("Enter name:");
	fgets (name,sizeof (name),stdin);   // read string
//  get(name); // khong nen dung
    printf("Name: ");
    puts(name); // display string
   return 0;
    }


