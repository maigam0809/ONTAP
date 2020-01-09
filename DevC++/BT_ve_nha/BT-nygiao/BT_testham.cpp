#include <stdio.h>
#include <math.h>
int gcd(int a, int b){
    // N?u a = 0 => ucln(a,b) = b
    // N?u b = 0 => ucln(a,b) = a
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; // a = a - b
        }else{
            b -= a;
        }
    }
    return a; // return a or b, b?i vì lúc này a và b b?ng nhau
}

int main(){
	int x,y;
	
	printf ("Nhap so nguyen :");
	scanf ("%d",&x);
	printf ("Nhap so nguyen :");
	scanf ("%d",&y);
	
	
	printf (" UCLN la:%d",gcd(x,y));
   
   }


