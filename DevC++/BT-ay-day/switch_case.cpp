#include <iostream>  
using namespace std;  
int main () {  
   int num;  
   cout<<"Enter a number: ";    
   cin>>num;  
   
   switch (num) {    
      case 1:
	  case 3:     
      case 5: 
	  	cout<<"It is le"; 
	  break;  
	    
      case 30: 
	  	cout<<"It is 30"; 
	  break;    
      default: cout<<"Not 10, 20 or 30"; break;    
    }
	
	/*
	if(num == 10 ){
		cout << "ite is 10";
	} else if (num == 20){
		
	}else if (num ==30 ){
		..
	}else {
		..
	}
	
	*/
} 

  

