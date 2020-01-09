#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int chucNang9(){
	int so[2];
	int kq[2];

	for(int i = 0; i < 2; i++){
		do {
			printf("Nhap so %d: ", i+1);
			scanf("%d", &so[i]);
		} while(so[i] < 1 || so[i] > 15 );
	}

	//random from [minN, maxN]
	//https://nguyenvanhieu.vn/sinh-so-ngau-nhien-trong-c-cpp/
	
	for(int i = 0; i < 2; i++){
		kq[i] = 1 + rand() % (15 + 1 - 1);
	}
	int dem = 0;	
	//kiem tra de in ra ket qua
	for(int i = 0; i < 2; i++){
		//
//		if(so[i] == kq[0] || so[i] == kq[1]){
//			dem++;
//		}

		for(int j = 0; j < 2; j++){
			if(so[i] == kq[j]){
				dem++;
			}
		}
	}
	
	for(int i = 0; i < 2; i++){
		printf("\nKet qua %d = %02d",i+1, kq[i]);
	}
	
		
	
	if(dem == 0){
		printf("\nChuc ban may man lan sau");
	}else if(dem == 1){
		printf("\nBan da trung giai nhi");
	}else {
		printf("\nBan da trung giai nhat");
	}
	

   return 0;
}



