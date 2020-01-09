// 
#include <iostream>
 using namespace std;
 int main(){
 	int a,b,c,d,max;
 	cout<<"Nhap so nguyen a:";
 	cin>>a;
 	
 	cout<<"Nhap so nguyen b:";
 	cin>>b;
 	
 	cout<<"Nhap so nguyen c:";
 	cin>>c;
 	cout<<"Nhap so nguyen d:";
 	cin>>d;
 	max=a;
 	if(max<b){
 		max=b;
 	
	 }
	if(max<c){
		max=c;
	}
	if(max<d){
		max=d;
	}
	cout<<"So nguyen lon nhat la:"<<max<<endl;
	return 0;
}
