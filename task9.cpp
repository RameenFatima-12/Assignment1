#include<iostream>
using namespace std;

int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,0},x=10,sum = 0;
	for(int i = 0; i<=9;i++){
		
		for(int j=0;j<=10;j++){
			
			for(int k=0;k<=10;k++){
				sum = a[i] + a[j] + a[k];
				if(sum == x){
					cout<< "("<<a[i]<<","<<a[j]<<","<<a[k]<<")"<<endl;
					
				}
			}
		}
	
		
	}
	
	
	
	
}
