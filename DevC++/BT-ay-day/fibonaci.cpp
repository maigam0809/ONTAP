#include <stdio.h>

int main(){
	int n;
	int f, fn1, fn2;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	for(int i = 1; i <=n; i++){
		if(i == 1 || i == 2){
			fn1 = 1;
			fn2 = 1;
			printf("1 ");
		}else {
			f = fn2 + fn1;
			printf("%d ", f);
			fn2 =  fn1;
			fn1 = f;		
		}
	}
	
}
