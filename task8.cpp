#include<iostream>
using namespace std;

int main(){
	int a[5] = {1,2,3,4,5},b[8];
	for(int i=0;i<=4;i++){
		
		b[i]=a[i];
	}
	for(int i=0;i<=2;i++){
		
		b[5+i]= 6+i;
		
	}
	cout << "The array before addition is:";
		for(int i=0;i<=4;i++){
		cout << a[i]<<",";
		
	}
		cout <<endl<< "The array after addition is:";
	
	for(int i=0;i<=7;i++){
		cout << b[i]<<",";
		
	}
	
	
	
	
}
