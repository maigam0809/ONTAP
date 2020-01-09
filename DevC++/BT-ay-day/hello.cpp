#include <iostream>
 
using namespace std;
/* ham tra ve gia tri lon nhat giua hai so */
int soSanh(int so1, int so2) {
	int max = so1;
	
	if(max < so2){
		max = so2;
	}
	
 	return max;
}
  
int main () {
 	int a,b,c,max;
	
	cout <<"Nhap so thu nhat la a:";
	cin>> a;
	
	cout <<"Nhap so thu hai la b:";
	cin>>b;
	
	cout <<"Nhap so thu ba la c:";
	cin>>c;
  	
  	
  	max = soSanh();
  	//so sanh max voi c
  	max = soSanh(max, c);
  	
  
   cout << "Max value is: " << max << endl;
  
   return 0;
}
  
  //ham khong co gia tri tra ve va khong co doi so
  void tenHam(){
  	
  }
  
  //ham khong co gia tri tra ve va co doi so
  void tenHamCoDoiSo(int a, float b, int c){
  	
  }
  
  //ham co gia tri tra ve nhung khong co doi so
  int hamCo(){
  	
  	
  	return 135;
  }
  
  //ham co /gia tri tra ve va co doi so
  int hamCo(int a, float b, int c){
  	
  	
  	return 135;
  }
  
  
  
  


