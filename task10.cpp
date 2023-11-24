#include<iostream>
using namespace std;

int main(){
	
	int a[6] = {4,6,8,1,7,9},temp;
cout << "Ascending order:"<<endl;
	for(int i=0;i<=5;i++){
		for(int j=0;j<=i;j++){
		  if(a[i]<a[j]){
		  	temp = a[j];
		  	a[j] = a[i];
		  	a[i] = temp;
		  	
		  }

}
	}


for( int i = 0;i<=5;i++){
	cout << a[i]<< ",";
	
}
cout<<endl<<"Descending order:"<< endl;
for(int i=0;i<=5;i++){
		for(int j=0;j<=i;j++){
		  if(a[i]>a[j]){
		  	temp = a[j];
		  	a[j] = a[i];
		  	a[i] = temp;
		  	
		  }

}
	}


for( int i = 0;i<=5;i++){
	cout << a[i]<< ",";
	
}		
}
