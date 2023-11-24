#include <iostream>
using namespace std;

int main(){
	int num,i=1,prime;
	cout<< "Enter your number:";
	cin>> num;
	while(i<num){
		for(int j =2;j<=i/2;j++){
		int rem = i%j;
	    
	    if (rem == 0){
	    	break;
		}
		else if (j == i/2){
			prime = i;
		}
		
}
 i++;
	}
	cout << "The largest prime number less than your number is:"<<prime;
	
	
		

			
	
}
