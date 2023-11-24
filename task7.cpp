#include<iostream>
using namespace std;

int main(){
	int k=0;
	char arr[]={'M','i','s','s','i','s','s','i','p','p','i'},arr2[100];
	cout<< "The initial array is:";
	for(int i = 0;i<=11;i++){
		cout << arr[i];
	}
	cout << endl;
	for (int i=0;i<=11;i++){
		arr[i];
		for(int j=i+1;j<=11;j++){
			if(arr[i]==arr[j]){
				break;
			}
			else if(j == 11){
				arr2[k]= arr[i];
				k++;
			}
			
		  
		}
		
	}
	
cout << "Array after deleting duplicate characters is:";
for(int i=0;i<=k;i++){
	cout<<arr2[i];
}	
}
